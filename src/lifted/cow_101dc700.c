/* f_0x101dc700 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101dc700 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101dc700(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663740)) + 0x91), 1);
      cow_bridge_101f23a0(g, COW_IMG(COW_ADDR_LIFT_101DC721), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_1066346C)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      uVar1 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x58u))))) + 0x54u))), COW_IMG(COW_ADDR_LIFT_101DC729), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      switch(uVar1) {
      case 1:
        uVar1 = 3;
        break;
      case 2:
        uVar1 = 0x25;
        break;
      default:
        uVar1 = 2;
        break;
      case 4:
        uVar1 = 0x8b;
        break;
      case 5:
        uVar1 = 0x97;
        break;
      case 6:
        uVar1 = 0x9e;
        break;
      case 7:
        uVar1 = 0xa6;
        break;
      case 8:
        uVar1 = 0xa8;
        break;
      case 9:
        uVar1 = 0xb5;
        break;
      case 10:
        uVar1 = 0xb9;
        break;
      case 0xb:
        uVar1 = 0xba;
        break;
      case 0xc:
        uVar1 = 0xbb;
        break;
      case 0xd:
        uVar1 = 0xbf;
        break;
      case 0xe:
        uVar1 = 0xc0;
        break;
      case 0xf:
        uVar1 = 0xc1;
        break;
      case 0x10:
        uVar1 = 0xc2;
        break;
      case 0x11:
        uVar1 = 0xc5;
      }
      uVar1 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_101DC7A9), 2u, (const CowU32[]){ 0xd, uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      cow_bridge_1011ae30(g, COW_IMG(COW_ADDR_LIFT_101DC7B5), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      iVar2 = cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x58u))))) + 0x54u))), COW_IMG(COW_ADDR_LIFT_101DC7BD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      if (iVar2 != 0x11) {
        cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101DC7D5), 3u, (const CowU32[]){ 272101400u, 1u, 0u }, 274864184u, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      }
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(rd32((uint32_t)((param_1 + 0x58u))))) + 0x24u))), COW_IMG(COW_ADDR_LIFT_101DC7E1), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_10663740)), 0u);
      return;
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
void cow_adapter_101dc700(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_10663740));   /* 0x101dc700: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101dc705: push esi */
    g->esi = g->ecx;   /* 0x101dc706: the value the entry loaded and the decompiler dropped */
    cow_lift_101dc700(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
