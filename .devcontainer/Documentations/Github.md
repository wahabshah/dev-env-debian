## Github Actions

* Github Runners
 * Default packages :- https://github.com/actions/runner-images/blob/ubuntu22/20230206.1/images/linux/Ubuntu2204-Readme.md
 * Add more packages from apt :- https://docs.github.com/en/actions/using-github-hosted-runners/customizing-github-hosted-runners

## deploy-aspnet-blazor-webassembly-to-github-pages

* https://swimburger.net/blog/dotnet/how-to-deploy-aspnet-blazor-webassembly-to-github-pages
* This was inspiration to deploy-qt6-webassembly-to-github-pages

## Create Github Pages Branch
* https://gist.github.com/ramnathv/2227408
* https://gist.github.com/matteodelucchi/f9dffd7967687d51cb5f577228fc6bd1
* https://jiafulow.github.io/blog/2020/07/09/create-gh-pages-branch-in-existing-repo/
* https://wahabshah.github.io/dev-env-debian/
```sh
git checkout --orphan gh-pages
# preview files to be deleted
git rm -rf --dry-run .
# actually delete the files
git rm -rf .
echo "My GitHub Page" > index.html
git add .
git commit -a -m "First pages commit"
git push origin gh-pages
``