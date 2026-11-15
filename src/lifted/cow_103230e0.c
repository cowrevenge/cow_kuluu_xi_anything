/* f_0x103230e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_103230e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_103230e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 uVar3;
    CowU8 local_7c[120];
    uVar1 = cow_bridge_10323477(g, COW_IMG(COW_ADDR_LIFT_103230EF), 1u, (const CowU32[]){ param_1 }, param_1, g->edx, g->eax, 0u);
      iVar2 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_109B2A3C), COW_IMG(COW_ADDR_LIFT_10323112), 4u, (const CowU32[]){ uVar1, (-(CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_109B2A28)) != 0) & 0xfffff002) + 0x1001, local_7c, 0x78 }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_109B2A34), 0);
        g->eax = (CowU32)(1); return;
      }
      iVar2 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_10323130), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109B2A2C)), local_7c }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        if (rd32(COW_IMG(COW_ADDR_LIFT_109B2A28)) == 0) {
          uVar3 = 1;
          goto L_1032316c;
        }
      }
      else {
        if (((rd32(COW_IMG(COW_ADDR_LIFT_109B2A28)) != 0) || (rd32(COW_IMG(COW_ADDR_LIFT_109B2A24)) == 0)) ||
           (iVar2 = cow_bridge_10325d40(g, COW_IMG(COW_ADDR_LIFT_10323164), 3u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_109B2A2C)), local_7c, rd32(COW_IMG(COW_ADDR_LIFT_109B2A24)) }, g->ecx, g->edx, g->eax, 12u), iVar2 != 0)) goto L_1032318b;
        uVar3 = 0;
    L_1032316c:
        iVar2 = cow_bridge_103232f9(g, COW_IMG(COW_ADDR_LIFT_10323172), 2u, (const CowU32[]){ uVar1, uVar3 }, g->ecx, g->edx, g->eax, 0u);
        if (iVar2 == 0) goto L_1032318b;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_109B2A34), rd32(COW_IMG(COW_ADDR_LIFT_109B2A34)) | 4);
      wr32(COW_IMG(COW_ADDR_LIFT_109B2A1C), uVar1);
      wr32(COW_IMG(COW_ADDR_LIFT_109B2A38), uVar1);
    L_1032318b:
      g->eax = (CowU32)(~rd32(COW_IMG(COW_ADDR_LIFT_109B2A34)) >> 2 & 1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_103230e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x103230e0: push ebp */
    g->ebp = g->esp;                       /* 0x103230e1: mov ebp, esp */
    g->esp -= 0x78u;                      /* 0x103230e3: 120 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x103230e6: push esi */
    cow_lift_103230e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
