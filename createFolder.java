	public void createFolder(String path) {
		
		Set<PosixFilePermission> perms = new HashSet<>();
		perms.add(PosixFilePermission.OWNER_READ);
	    perms.add(PosixFilePermission.OWNER_WRITE);
	    perms.add(PosixFilePermission.OWNER_EXECUTE);

	    perms.add(PosixFilePermission.OTHERS_READ);
	    perms.add(PosixFilePermission.OTHERS_WRITE);
	    perms.add(PosixFilePermission.OTHERS_EXECUTE);

	    perms.add(PosixFilePermission.GROUP_READ);
	    perms.add(PosixFilePermission.GROUP_WRITE);
	    perms.add(PosixFilePermission.GROUP_EXECUTE);
	    	
		
		try {
			if(!Files.exists(Paths.get(path))) {
				Path p = Files.createDirectory(Paths.get(path));
				Files.setPosixFilePermissions(p, perms);
			}
		} catch (IOException e) {
			e.printStackTrace();
		}
		
	}
