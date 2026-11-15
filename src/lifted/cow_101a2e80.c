/* f_0x101a2e80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a2e80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a2e80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    int iVar3;
    cow_bridge_101a1cc0(g, COW_IMG(COW_ADDR_LIFT_101A2E8C), 0u, (const CowU32[]){ 0u }, rd32((uint32_t)((int)param_1 + 4)), g->edx, g->eax, 0u);
      cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A2EA0), 4u, (const CowU32[]){ 0x3e, 0x89, 1, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
      if ((cVar1 == '\0') || (cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A2EAE), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u), cVar1 == '\0')) {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A2F0B), 4u, (const CowU32[]){ 0x3e, 0x8a, 1, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if ((cVar1 != '\0') && (cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A2F19), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')) {
          if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\x02') {
            cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A2F2A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar1 != '\0') {
              wr8((uint32_t)((int)param_1 + 0x18), 1);
              cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A2ECB), 1u, (const CowU32[]){ 272065340u }, 274864184u, g->edx, g->eax, 0u);
              goto L_101a2f40;
            }
            if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\x02') goto L_101a3024;
          }
          wr8((uint32_t)((int)param_1 + 0xc), 0);
          wr8((uint32_t)((int)param_1 + 0x18), 0);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A2EF7), 1u, (const CowU32[]){ 272065380u }, g->ecx, g->edx, g->eax, 0u);
          goto L_101a3024;
        }
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A2F91), 4u, (const CowU32[]){ 0x3e, 0x89, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if ((cVar1 == '\0') || (cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A2F9F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')) {
          cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A2FDF), 4u, (const CowU32[]){ 0x3e, 0x8a, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
          if ((cVar1 == '\0') || (cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A2FED), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')) {
            wr32((uint32_t)((int)param_1 + 0x14), 0);
            goto L_101a3024;
          }
          if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\0') goto L_101a3024;
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) == 0) {
            uVar2 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A2FB6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)((int)param_1 + 0x14), uVar2);
            goto L_101a3024;
          }
          iVar3 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A2FC0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (iVar3 == (int32_t)rd32((uint32_t)((int)param_1 + 0x14))) goto L_101a3024;
          wr8((uint32_t)((int)param_1 + 0x18), 1);
    L_101a2f40:
          cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101A2EDD), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037633C), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
          wr8((uint32_t)((int)param_1 + 0xc), 2);
          goto L_101a3024;
        }
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\0') goto L_101a3024;
        if ((int32_t)rd32((uint32_t)((int)param_1 + 0x14)) == 0) {
          uVar2 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A3004), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)((int)param_1 + 0x14), uVar2);
          goto L_101a3024;
        }
        iVar3 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A300E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar3 == (int32_t)rd32((uint32_t)((int)param_1 + 0x14))) goto L_101a3024;
        wr8((uint32_t)((int)param_1 + 0x18), 1);
      }
      else {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) == '\x01') {
          wr8((uint32_t)((int)param_1 + 0xc), 0);
          wr8((uint32_t)((int)param_1 + 0x18), 0);
          cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A2F40), 1u, (const CowU32[]){ 272065380u }, 274864184u, g->edx, g->eax, 0u);
          goto L_101a3024;
        }
        wr8((uint32_t)((int)param_1 + 0x18), 1);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A2F7C), 1u, (const CowU32[]){ 272065340u }, 274864184u, g->edx, g->eax, 0u);
      }
      cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101A2F52), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10376364), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
    L_101a3024:
      cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A3031), 4u, (const CowU32[]){ 0x3e, 0x76, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
      if (cVar1 == '\0') {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101A30B1), 4u, (const CowU32[]){ 0x3e, 0x77, 4, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
        if (cVar1 == '\0') {
          if (((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) == '\0') || ((int8_t)rd8((uint32_t)((int)param_1 + 0x18)) != '\0')) {
            wr8((uint32_t)((int)param_1 + 0xd), 0);
            wr32((uint32_t)((int)param_1 + 0x10), 0);
          }
          else {
            wr8((uint32_t)((int)param_1 + 0xc), 0);
            wr8((uint32_t)((int)param_1 + 0xd), 0);
            wr32((uint32_t)((int)param_1 + 0x10), 0);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A308D), 1u, (const CowU32[]){ 272065340u }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A3109), 1u, (const CowU32[]){ 272065380u }, 274864184u, g->edx, g->eax, 0u);
          }
        }
        else {
          cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A303F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (cVar1 == '\0') {
            return;
          }
          if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\x02') {
            if ((int32_t)rd32((uint32_t)((int)param_1 + 0x10)) == 0) {
              uVar2 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A305C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              wr32((uint32_t)((int)param_1 + 0x10), uVar2);
              wr8((uint32_t)((int)param_1 + 0xd), 2);
            }
            else {
              iVar3 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A306C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              if (iVar3 != (int32_t)rd32((uint32_t)((int)param_1 + 0x10))) {
                wr8((uint32_t)((int)param_1 + 0x18), 0);
                wr8((uint32_t)((int)param_1 + 0xc), 2);
                cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A3149), 1u, (const CowU32[]){ 272065380u }, 274864184u, g->edx, g->eax, 0u);
                cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101A309F), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1037633C), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
              }
            }
          }
        }
      }
      else {
        cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A30BF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          return;
        }
        if ((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) != '\x01') {
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x10)) == 0) {
            uVar2 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A30DD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            wr32((uint32_t)((int)param_1 + 0x10), uVar2);
            wr8((uint32_t)((int)param_1 + 0xd), 1);
          }
          else {
            iVar3 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_101A30EB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (iVar3 != (int32_t)rd32((uint32_t)((int)param_1 + 0x10))) {
              wr8((uint32_t)((int)param_1 + 0x18), 0);
              wr8((uint32_t)((int)param_1 + 0xc), 1);
              cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101A3158), 1u, (const CowU32[]){ 272065340u }, 274864184u, g->edx, g->eax, 0u);
              cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101A311B), 3u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10376364), 1, 0 }, 274864184u, g->edx, g->eax, 0u);
            }
          }
        }
      }
      cVar1 = cow_bridge_101a33e0(g, COW_IMG(COW_ADDR_LIFT_101A316C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((cVar1 != '\0') && (cVar1 = cow_bridge_101a3550(g, COW_IMG(COW_ADDR_LIFT_101A317B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')) {
        if (((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) == '\x01') || ((int8_t)rd8((uint32_t)((int)param_1 + 0xd)) == '\x01')) {
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A319E), 3u, (const CowU32[]){ 108u, 9u, 10u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31AA), 3u, (const CowU32[]){ 0x6d, 0, 1 }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31B6), 3u, (const CowU32[]){ 0x6e, 1, 2 }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31C3), 3u, (const CowU32[]){ 111u, 2u, 3u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31D0), 3u, (const CowU32[]){ 112u, 3u, 4u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31DD), 3u, (const CowU32[]){ 113u, 4u, 5u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31EA), 3u, (const CowU32[]){ 114u, 5u, 6u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A31F7), 3u, (const CowU32[]){ 115u, 6u, 7u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3204), 3u, (const CowU32[]){ 116u, 7u, 8u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3211), 3u, (const CowU32[]){ 117u, 8u, 9u }, param_1, g->edx, g->eax, 0u);
        }
        if (((int8_t)rd8((uint32_t)((int)param_1 + 0xc)) == '\x02') || ((int8_t)rd8((uint32_t)((int)param_1 + 0xd)) == '\x02')) {
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A322E), 3u, (const CowU32[]){ 98u, 9u, 10u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A323A), 3u, (const CowU32[]){ 99, 0, 1 }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3246), 3u, (const CowU32[]){ 100, 1, 2 }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3253), 3u, (const CowU32[]){ 101u, 2u, 3u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3260), 3u, (const CowU32[]){ 102u, 3u, 4u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A326D), 3u, (const CowU32[]){ 103u, 4u, 5u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A327A), 3u, (const CowU32[]){ 104u, 5u, 6u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3287), 3u, (const CowU32[]){ 105u, 6u, 7u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A3294), 3u, (const CowU32[]){ 106u, 7u, 8u }, param_1, g->edx, g->eax, 0u);
          cow_bridge_101a3500(g, COW_IMG(COW_ADDR_LIFT_101A32A1), 3u, (const CowU32[]){ 107u, 8u, 9u }, param_1, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a2e80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101a2e80: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a2e81: push esi */
    g->esi = g->ecx;   /* 0x101a2e82: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x101a2e84: register ecx, replayed as the entry ran it */
    cow_lift_101a2e80(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
