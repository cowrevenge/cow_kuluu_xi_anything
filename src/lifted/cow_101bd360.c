/* f_0x101bd360 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101bd360 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101bd360(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU8 bVar3;
    CowU32 uVar4;
    int iVar5;
    int iVar6;
    CowU32 uVar7;
    _Bool bVar8;
      
      if (((int8_t)rd8((uint32_t)(param_1 + 0x271c)) != '\0') && (bVar3 = 0, (int32_t)rd32((uint32_t)(param_1 + 0x4e30)) != 0)) {
        uVar4 = 0;
        do {
          iVar1 = param_1 + uVar4 * 100;
          iVar6 = iVar1 + 0x2724;
          if ((int16_t)rd16((uint32_t)(iVar1 + 0x2724)) != 0) {
            if ((rd32((uint32_t)(iVar1 + 0x2720)) & 8) == 0) {
              if ((rd32((uint32_t)(iVar1 + 0x2720)) & 4) == 0) {
                if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
                  uVar7 = param_2;
                  goto L_101bd3f9;
                }
                cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD3D7), 3u, (const CowU32[]){ param_2, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
                bVar8 = cVar2 == '\0';
              }
              else if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
                uVar7 = param_3;
    L_101bd3f9:
                iVar5 = cow_bridge_10312c8d(g, COW_IMG(COW_ADDR_LIFT_101BD3FE), 2u, (const CowU32[]){ uVar7, iVar6 }, g->ecx, g->edx, g->eax, 8u);
                bVar8 = iVar5 == 0;
              }
              else {
                cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD3F3), 3u, (const CowU32[]){ param_3, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
                bVar8 = cVar2 == '\0';
              }
              if (!bVar8) {
                g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
              }
            }
            uVar4 = rd32((uint32_t)(iVar1 + 0x2720));
            if (((uVar4 & 2) == 0) || ((uVar4 & 4) == 0)) {
              if ((uVar4 & 2) == 0) {
                if ((uVar4 & 4) == 0) {
                  if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
                    uVar7 = param_4;
                    goto L_101bd4c1;
                  }
                  cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD438), 3u, (const CowU32[]){ param_4, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
                  bVar8 = cVar2 == '\0';
                }
                else {
                  if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
                    uVar7 = param_5;
                    goto L_101bd4c3;
                  }
                  cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD467), 3u, (const CowU32[]){ param_5, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
                  bVar8 = cVar2 == '\0';
                }
              }
              else {
                if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
                  uVar7 = param_6;
                  goto L_101bd4c3;
                }
                cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD495), 3u, (const CowU32[]){ param_6, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
                bVar8 = cVar2 == '\0';
              }
            }
            else if ((int8_t)rd8((uint32_t)(iVar1 + 0x2762)) == '\0') {
              uVar7 = param_7;
    L_101bd4c1:
    L_101bd4c3:
              iVar6 = cow_bridge_10312c8d(g, COW_IMG(COW_ADDR_LIFT_101BD4C8), 2u, (const CowU32[]){ uVar7, iVar6 }, g->ecx, g->edx, g->eax, 8u);
              bVar8 = iVar6 == 0;
            }
            else {
              cVar2 = cow_bridge_101bd510(g, COW_IMG(COW_ADDR_LIFT_101BD4B9), 3u, (const CowU32[]){ param_7, iVar6, iVar1 + 0x2763 }, g->ecx, g->edx, g->eax, 0u);
              bVar8 = cVar2 == '\0';
            }
            if (!bVar8) {
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
            }
          }
          bVar3 = bVar3 + 1;
          uVar4 = (CowU32)bVar3;
        } while (uVar4 < rd32((uint32_t)(param_1 + 0x4e30)));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 7 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebp, ecx], ret 24.
   Arguments: 1 register argument(s) [ecx], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101bd360(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101bd360: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101bd361: push ebp */
    g->ebp = g->ecx;   /* 0x101bd362: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101bd364: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101bd365: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x271Cu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101bd366: register eax, replayed as the entry ran it */
    cow_lift_101bd360(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 10 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
