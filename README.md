Contributing
============

Setup
-----

   In order to contribute to the repository, you should first:  
1. Create a local copy of the repository on your device  
> If you have previously cloned the repository, you may skip this step  
   ```bash
   git clone https://github.com/stealthtigers3164/TShirtCannonRewrite.git
   ```  
2. If you have already cloned the repository, you should pull to make sure you are up to date  
> If you cloned the repository in the last step, you may skip this step
   ```bash
   git pull origin master
   git pull origin dev
   ```  
> This will make sure both of the club-wide branches are up to date.
> If they are not up to date, you may end up with merge conflicts when you attempt to push code later.
> This is not a big deal, but it is more effort than required had this step not been skipped in the first place.  
3. Create your own branch
> The branch name should be the same as your name (in lowercase).
> Each member will have their own branch.  
   ```bash
   git branch <your-name>
   git checkout <your-name/branch-name>
   ```

Pushing Changes
---------------

   **In order to push code to github, you *can* use vscode. However, I will be requiring you to learn basic git commands.**
   Pushing consists of three steps:  
- adding/staging your changes 
- commiting your changes
- pushing your changes to your branch

   Adding/staging changes is fairly straightforward:  
```bash
git add <files-to-commit>
```  
   **or**
```bash
git stage <files-to-commit>
```
> If you want to check the status of your changes, you can use `git status`.  
> Red files *are not* staged and *will not* be committed.  
> Green files *are* staged and *will* be committed.

   If you accidentally stage files that you weren't ready to commit, you can reset your current staged files using `git reset`.  
```bash
git reset HEAD <file>
```
> HEAD is the last commit on the current branch  
   This command will unstage the file while maintaining any changes you made to it.

   If you accidentally track files that you intended to add to the `.gitignore`, you can also remove those.
```bash
git rm <filename> --cache
```
> This command will clear the cache file, therefore removing any tracked files that should not be tracked.
> The files will remain on your disk, however they will not be pushed to the repository.

   Next, in order to commit your files, you can use the following command:
```bash
git commit -m "commit message"
```
> The `-m` flag is used to specify a commit message.
> Any time you commit without a message, it will assign a generic default commit message to that commit.
> For the sake of clarity, I will be requiring you to add a commit message describing your changes with each commit.
> You can also add the `-a` tag, or `-am` for both flags. `-a` will commit all changed files, staged or not.
> Due to this, I would prefer if you avoid this command unless you absolutely mean to commit all changes.
> Please stick to `git add` instead for now

   Finally, pushing your changes is the only way for those changes to be reflected in the public repository.
> If you do not push, all of your choices will remain local.
> Therefore, I will be requiring you to push all of your changes, completed or not.  
   Before pushing, remember that you should be pushing to your branch only for the time being.
```bash
git checkout <your-branch>
git push
```
> `git checkout branch` will switch to the specified branch name, in this case the branch you created for this repository.  
> Your state will change to match the state of the specified branch at the time of your last pulled.
> Doing this will ensure that you are always pushing to your branch.
> For an added layer of certainty, you may also choose to instead use `git push origin <your-branch>`, which will push your committed changes to the specifed branch.
  

Club-Wide Branches
------------------

   While I require you to push changes to your own branch at the end of every meeting, I will also alocate some time for discussing our work before the end of each meeting.  
   During this discussion, Hector and I will decide wether your changes are ready to push to the `dev` branch. This is a club-wide branch, meaning it is a branch that everyone will eventually merge to.  
   If we choose to merge your changes with the `dev` branch, this means that either we feel your code is ready for contributions from other people, or (if a robot is available for testing) that it is ready to test on the robot.

   Once code is tested on the robot, if it is found to be working, it may then *and only then* be pushed to the `master` branch.
   Remember, our goal is to keep the master branch the clean, working version of the robot. 
> Hotfixes should not be commited until after the competition, and when they are, they should be pushed to the `dev` branch. They will then be reviewd/documented/improved before being pushed to the `master` branch.