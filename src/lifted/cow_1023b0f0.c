/* f_0x1023b0f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1023b0f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1023b0f0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 pcVar6;
    iVar3 = 0;
      if (param_2 != (CowU32)0x0) {
        uVar4 = 0xffffffff;
        pcVar6 = param_2;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar2 = rd8((uint32_t)pcVar6);
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
        iVar5 = 0;
        iVar3 = param_3;
        if (0 < (int)(~uVar4 - 1)) {
          do {
            bVar1 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(iVar5)));
            if ((bVar1 < 0x30) || (0x39 < bVar1)) {
              if ((0x40 < bVar1) && (bVar1 < 0x5b)) {
                iVar3 = bVar1 - 0x2b;
                goto L_1023b1cd;
              }
              if ((0x60 < bVar1) && (bVar1 < 0x7b)) {
                iVar3 = bVar1 - 0x31;
                goto L_1023b1cd;
              }
              cVar2 = cow_bridge_1011c920(g, COW_IMG(COW_ADDR_LIFT_1023B17E), 1u, (const CowU32[]){ param_2 + iVar5 }, g->ecx, g->edx, 0u, 4u);
              if (cVar2 != '\0') {
                iVar5 = iVar5 + 1;
                cVar2 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(iVar5)));
                if (cVar2 == -0x42) {
                  iVar3 = 0xa0;
                }
                else if (cVar2 == -0x3d) {
                  iVar3 = 0xa1;
                }
                else if (cVar2 == -0x39) {
                  iVar3 = 0xa2;
                }
                else if (cVar2 == -0x32) {
                  iVar3 = 0xa3;
                }
                else if (cVar2 == -0x2b) {
                  iVar3 = 0xa4;
                }
                else {
                  if (cVar2 != -0x38) goto L_1023b1f9;
                  iVar3 = 0xa7;
                }
                goto L_1023b1cd;
              }
              param_3 = param_3 + 6;
            }
            else {
              iVar3 = bVar1 - 0x24;
    L_1023b1cd:
              iVar3 = (int32_t)rd32((uint32_t)(rd32((uint32_t)param_1) + iVar3 * 4));
              cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_1023B1E8), 5u, (const CowU32[]){ param_3, param_4, 0x80808080, 0, 0 }, g->ecx, g->edx, 0u, 0u);
              param_3 = param_3 + ((int)(int16_t)rd16((uint32_t)(iVar3 + 0x22)) - (int)(int16_t)rd16((uint32_t)(iVar3 + 0x20)));
            }
    L_1023b1f9:
            iVar5 = iVar5 + 1;
            iVar3 = param_3;
          } while (iVar5 < (int)(~uVar4 - 1));
        }
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1023b0f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1023b0f0: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edx = (uint32_t)(rd32(A)); }   /* 0x1023b0f1: register edx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x1023b0f5: the value the entry loaded and the decompiler dropped */
    cow_lift_1023b0f0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
