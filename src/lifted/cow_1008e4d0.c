/* f_0x1008e4d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1008e4d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1008e4d0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 this;
    CowU32 uVar5;
    iVar3 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_1008E4D9), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      uVar4 = rd32((uint32_t)(param_1 + 0x120));
      uVar5 = uVar4 & 0xff7fffff;
      wr32((uint32_t)(param_1 + 0x120), uVar5);
      if ((uVar4 & 0x200) == 0) goto L_1008e573;
      if (((char)uVar5 < '\0') && (rd32(COW_IMG(COW_ADDR_LIFT_104807F5)) != '\0')) {
        this = rd32((uint32_t)(param_1 + 0xa0));
        if ((uVar4 & 0x20000) == 0) goto L_1008e51c;
    L_1008e554:
        cow_bridge_10085a50(g, COW_IMG(COW_ADDR_LIFT_1008E559), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        if ((rd8((uint32_t)(param_1 + 0x122)) & 1) != 0) goto L_1008e573;
        uVar4 = rd32((uint32_t)(param_1 + 0x120)) | 0x10000;
      }
      else {
        if ((uVar4 & 0xc000) != 0) {
          if (((uVar4 & 0x40000) != 0) && (((int32_t)(-1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x138)))))) {
            wr32((uint32_t)(param_1 + 0x120), uVar5 | 0x800000);
          }
          this = rd32((uint32_t)(param_1 + 0xa0));
          goto L_1008e554;
        }
        this = rd32((uint32_t)(param_1 + 0xa0));
    L_1008e51c:
        cow_bridge_10085a10(g, COW_IMG(COW_ADDR_LIFT_1008E521), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        uVar4 = rd32((uint32_t)(param_1 + 0x120)) & 0xfffeffff;
      }
      wr32((uint32_t)(param_1 + 0x120), uVar4);
    L_1008e573:
      if ((rd32((uint32_t)(param_1 + 0x120)) & 0x100) == 0) {
        if ((rd32((uint32_t)(iVar3 + 0x130)) >> 0xb & 1) != 0) {
          switch(rd8((uint32_t)(iVar3 + 0x1ff))) {
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
            if (((rd8((uint32_t)(param_1 + 0x1d0)) & 1) != 0) &&
               ((rd32((uint32_t)(param_1 + 0x128)) & 0x3800) < 0x1800)) {
              switch(rd8((uint32_t)(param_1 + 0x1ff))) {
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
                break;
              default:
                wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) | 0x800000);
              }
            }
          }
        }
        cVar2 = cow_bridge_10193890(g, COW_IMG(COW_ADDR_LIFT_1008E5FC), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 4u);
        if ((cVar2 != '\0') && ((rd32((uint32_t)(param_1 + 300)) >> 0x16 & 1) != 0)) {
          wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) | 0x800000);
          iVar3 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_1008E62A), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
          while (iVar3 != 0) {
            if ((rd16((uint32_t)(iVar3 + 0x18)) != 0) &&
               (param_1 == rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(iVar3 + 0x18))))))) {
              wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xff7fffff);
              break;
            }
            iVar3 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_1008E64D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          }
        }
        uVar4 = rd32((uint32_t)(param_1 + 0x120));
        if (((-1 < (char)uVar4) || (rd32(COW_IMG(COW_ADDR_LIFT_104807F5)) == '\0')) && (((int32_t)(-1) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x138)))))) {
          if ((uVar4 & 0x44000) != 0) {
            wr32((uint32_t)(param_1 + 0x120), uVar4 | 0x800000);
          }
          if ((rd32((uint32_t)(param_1 + 0x78)) & 0xff000000) == 0) {
            bVar1 = ((CowU8)rd32(COW_IMG(COW_ADDR_LIFT_104808FC)) | (CowU8)rd32(COW_IMG(COW_ADDR_LIFT_1047FB40))) & 2;
          }
          else {
            bVar1 = ((CowU8)rd32(COW_IMG(COW_ADDR_LIFT_104808FC)) | (CowU8)rd32(COW_IMG(COW_ADDR_LIFT_1047FB40))) & 0x10;
          }
          if (bVar1 != 0) {
            wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) | 0x800000);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1008e4d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1008e4d0: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1008e4d1: push edi */
    g->esi = g->ecx;   /* 0x1008e4d2: the value the entry loaded and the decompiler dropped */
    cow_lift_1008e4d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
