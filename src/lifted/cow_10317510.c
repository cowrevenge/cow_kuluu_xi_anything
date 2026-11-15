/* f_0x10317510 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10317510 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10317510(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    puVar3 = param_1;
      do {
        if (((CowU32)puVar3 & 3) == 0) goto L_1031752c;
        uVar4 = rd32((uint32_t)puVar3);
        puVar3 = (CowU32)((int)puVar3 + 1);
      } while ((CowU8)uVar4 != 0);
      goto L_1031755f;
      while( 1 ) {
        if ((uVar4 & 0xff0000) == 0) {
          puVar5 = (CowU32)((int)puVar5 + 2);
          goto joined_r0x1031757b;
        }
        if ((uVar4 & 0xff000000) == 0) break;
    L_1031752c:
        do {
          puVar5 = puVar3;
          puVar3 = puVar5 + 4u * (uint32_t)(1);
        } while (((rd32((uint32_t)puVar5) ^ 0xffffffff ^ rd32((uint32_t)puVar5) + 0x7efefeff) & 0x81010100) == 0);
        uVar4 = rd32((uint32_t)puVar5);
        if ((char)uVar4 == '\0') goto joined_r0x1031757b;
        if ((char)(uVar4 >> 8) == '\0') {
          puVar5 = (CowU32)((int)puVar5 + 1);
          goto joined_r0x1031757b;
        }
      }
    L_1031755f:
      puVar5 = (CowU32)((int)puVar3 + -1);
    joined_r0x1031757b:
      do {
        if (((CowU32)param_2 & 3) == 0) {
          do {
            uVar2 = rd32((uint32_t)param_2);
            uVar4 = rd32((uint32_t)param_2);
            param_2 = param_2 + 4u * (uint32_t)(1);
            if (((uVar2 ^ 0xffffffff ^ uVar2 + 0x7efefeff) & 0x81010100) != 0) {
              if ((char)uVar4 == '\0') {
    L_103175e8:
                wr8((uint32_t)puVar5, (CowU8)uVar4);
                g->eax = (CowU32)(param_1); return;
              }
              if ((char)(uVar4 >> 8) == '\0') {
                wr16((uint32_t)puVar5, (short)uVar4);
                g->eax = (CowU32)(param_1); return;
              }
              if ((uVar4 & 0xff0000) == 0) {
                wr16((uint32_t)puVar5, (short)uVar4);
                wr8((uint32_t)((int)puVar5 + 2), 0);
                g->eax = (CowU32)(param_1); return;
              }
              if ((uVar4 & 0xff000000) == 0) {
                wr32((uint32_t)puVar5, uVar4);
                g->eax = (CowU32)(param_1); return;
              }
            }
            wr32((uint32_t)puVar5, uVar4);
            puVar5 = puVar5 + 4u * (uint32_t)(1);
          } while( 1 );
        }
        bVar1 = (CowU8)rd32((uint32_t)param_2);
        uVar4 = (CowU32)bVar1;
        param_2 = (CowU32)((int)param_2 + 1);
        if (bVar1 == 0) goto L_103175e8;
        wr8((uint32_t)puVar5, bVar1);
        puVar5 = (CowU32)((int)puVar5 + 1);
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [edi], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10317510(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->ecx = param_1;   /* 0x10317510: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10317514: push edi */
    cow_lift_10317510(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
