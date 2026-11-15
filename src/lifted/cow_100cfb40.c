/* f_0x100cfb40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100cfb40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100cfb40(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 piVar3;
    int iVar4;
    int iVar5;
    iVar5 = 0;
      uVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CFB4B), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      switch(uVar2) {
      case 0:
      case 4:
      case 7:
      case 0x1c:
      case 0x1f:
        iVar5 = 0;
        break;
      case 2:
      case 3:
        iVar5 = 2;
        break;
      default:
        uVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CFB71), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_10084350(g, COW_IMG(COW_ADDR_LIFT_100CFB79), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          uVar2 = cow_bridge_10084390(g, COW_IMG(COW_ADDR_LIFT_100CFB84), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cVar1 = cow_bridge_10084370(g, COW_IMG(COW_ADDR_LIFT_100CFB8C), 1u, (const CowU32[]){ uVar2 }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 == '\0') break;
        }
      case 1:
      case 6:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
        iVar5 = 1;
      }
      piVar3 = (CowU32)cow_bridge_1002b5a0(g, COW_IMG(COW_ADDR_LIFT_100CFBA0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((rd32((uint32_t)piVar3) == 0) || (iVar4 = cow_bridge_10035250(g, COW_IMG(COW_ADDR_LIFT_100CFBAE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), iVar4 == 0)) {
        g->eax = (CowU32)(0); return;
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(iVar4 + iVar5 * 0x18) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100cfb40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100cfb40: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100cfb41: push edi */
    g->esi = g->ecx;   /* 0x100cfb42: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x100cfb44: the value the entry loaded and the decompiler dropped */
    cow_lift_100cfb40(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
