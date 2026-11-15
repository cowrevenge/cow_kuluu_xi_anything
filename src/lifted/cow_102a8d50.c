/* f_0x102a8d50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8d50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8d50(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 uVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    CowU32 uVar5;
    CowU32 pbVar6;
    CowU32 pbVar7;
    if ((rd16((uint32_t)(param_1 + 2)) & 0xff00) == 0x100) {
        pbVar6 = (CowU32)(((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) +
                                   ((CowU32)rd16((uint32_t)(param_1 + 8)) * param_4 + param_3) * 4)) -
                          (int32_t)rd32((uint32_t)(param_1 + 0x1c))) + (int32_t)rd32((uint32_t)(param_1 + 0x18)));
        pbVar7 = param_1;
        if ((CowU32)((int32_t)rd32((uint32_t)(param_1 + 0x14)) + (int32_t)rd32((uint32_t)(param_1 + 0x18))) <= pbVar6) {
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A8DAA), 3u, (const CowU32[]){ 272316316u, 272360800u, 223u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102A8DB4), 1u, (const CowU32[]){ 272360904u }, g->ecx, g->edx, g->eax, 16u);
          cow_bridge_103158ee(g, COW_IMG(COW_ADDR_LIFT_102A8DBE), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          pbVar7 = g->ecx;
        }
        uVar3 = (CowU32)rd16((uint32_t)(pbVar7 + 6));
        if (uVar3 != 0) {
          while( 1 ) {
            bVar1 = rd8((uint32_t)pbVar6);
            pbVar7 = pbVar6 + 1;
            uVar5 = bVar1 & 0x7f;
            if ((bVar1 & 0x7f) == 0) break;
            if ((char)bVar1 < '\0') {
              do {
                uVar5 = uVar5 - 1;
                if (uVar3 == 0) {
                  return;
                }
                bVar1 = rd8((uint32_t)pbVar7);
                pbVar7 = pbVar7 + 1;
                wr8((uint32_t)param_1, bVar1);
                uVar3 = uVar3 - 1;
                param_1 = param_1 + param_4;
              } while (uVar5 != 0);
            }
            else {
              bVar1 = rd8((uint32_t)pbVar7);
              pbVar7 = pbVar6 + 2;
              do {
                uVar5 = uVar5 - 1;
                if (uVar3 == 0) {
                  return;
                }
                wr8((uint32_t)param_1, bVar1);
                uVar3 = uVar3 - 1;
                param_1 = param_1 + param_4;
              } while (uVar5 != 0);
            }
            pbVar6 = pbVar7;
            if (uVar3 == 0) {
              return;
            }
          }
        }
      }
      else {
        puVar4 = (CowU32)
                 (((CowU32)rd16((uint32_t)(param_1 + 8)) * param_4 + param_3) * (CowU32)rd16((uint32_t)(param_1 + 6))
                 + (int32_t)rd32((uint32_t)(param_1 + 0x18)));
        uVar3 = 0;
        if (rd16((uint32_t)(param_1 + 6)) != 0) {
          do {
            uVar2 = rd8((uint32_t)puVar4);
            puVar4 = puVar4 + 1;
            wr8((uint32_t)param_2, uVar2);
            param_2 = param_2 + param_5;
            uVar3 = uVar3 + 1;
          } while (uVar3 < rd16((uint32_t)(param_1 + 6)));
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8d50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->ecx = param_1;   /* 0x102a8d50: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8d54: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a8d55: push ebp */
    g->edx = 0u;   /* 0x102a8d56: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + 0x2u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102a8d58: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a8d5c: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a8d5d: register esi, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFF00u; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x102a8d61: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102a8d50(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
