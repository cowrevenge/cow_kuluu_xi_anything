/* f_0x101b9a10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101b9a10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101b9a10(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU32 pcVar4;
    CowU32 local_80[2];
    CowU32 local_78;
    CowU32 local_74;
    CowU32 local_70;
    CowU32 local_6c;
    CowU8 local_68[88];
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    CowU32 local_4;
    _Bool bVar5;
      
      cVar1 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_101B9A1F), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        iVar2 = 8;
        bVar5 = 1;
        pcVar3 = (CowU32)((int)param_1 + 8);
        pcVar4 = COW_IMG(COW_ADDR_LIFT_1037C928);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar5 = rd8((uint32_t)pcVar3) == rd8((uint32_t)pcVar4);
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar4 + 1;
        } while (bVar5);
        if (bVar5) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
      }
      cow_bridge_100dde90(g, COW_IMG(COW_ADDR_LIFT_101B9A4D), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100ddec0(g, COW_IMG(COW_ADDR_LIFT_101B9A65), 3u, (const CowU32[]){ local_68, rd32((uint32_t)((int)param_1 + 0x108)), rd32((uint32_t)((int)param_1 + 0x10c)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100ddf60(g, COW_IMG(COW_ADDR_LIFT_101B9A6F), 1u, (const CowU32[]){ local_68 }, g->ecx, g->edx, g->eax, 0u);
      local_80[0] = rd32((uint32_t)((int)param_1 + 4));
      local_78 = local_10;
      local_74 = local_c;
      local_6c = local_4;
      local_70 = local_8;
      iVar2 = cow_bridge_101c4920(g, COW_IMG(COW_ADDR_LIFT_101B9ABF), 5u, (const CowU32[]){ (int)param_1 + 8, local_80, 0x18, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 < 0) {
        g->eax = (CowU32)(0); return;
      }
      iVar2 = cow_bridge_101c4920(g, COW_IMG(COW_ADDR_LIFT_101B9AEC), 5u, (const CowU32[]){ (int)param_1 + 8, rd32((uint32_t)((int)param_1 + 0x108)), rd32((uint32_t)((int)param_1 + 0x10c)), 1, 0 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(-1 < iVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 128 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101b9a10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x80u;                      /* 0x101b9a10: 128 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101b9a16: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101b9a17: push esi */
    g->ebx = g->ecx;   /* 0x101b9a18: the value the entry loaded and the decompiler dropped */
    cow_lift_101b9a10(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
