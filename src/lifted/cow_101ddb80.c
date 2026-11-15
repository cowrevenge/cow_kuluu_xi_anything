/* f_0x101ddb80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ddb80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ddb80(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 pbVar3;
    CowU8 bVar4;
    int iVar5;
    CowU32 pbVar6;
    CowU8 auStack_7c[124];
    _Bool bVar7;
      
      if ((0 < param_3) && (param_3 < 4)) {
        iVar5 = 0;
        do {
          iVar2 = cow_bridge_10314060(g, COW_IMG(COW_ADDR_LIFT_101DDBB0), 2u, (const CowU32[]){ param_2, rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1037F050) + 4u * (uint32_t)(iVar5 * 2))) }, g->ecx, g->edx, param_4, 8u);
          if (iVar2 == 0) {
    L_101ddc02:
            if (iVar5 < 0) {
              g->eax = (CowU32)(0); return;
            }
            if (6 < iVar5) {
              g->eax = (CowU32)(0); return;
            }
            if ((int32_t)rd32((uint32_t)(param_1 + 8)) != 0) {
              g->eax = (CowU32)(0); return;
            }
            if (iVar5 == 6) {
              param_3 = 3;
            }
            else if (iVar5 == 5) {
              param_3 = 1;
            }
            bVar4 = ((char)iVar5 + '\x01') * '\x10' | (CowU8)param_3 & 0xf;
            wr8((uint32_t)(param_1 + 0x17), bVar4);
            cVar1 = cow_bridge_101dd520(g, COW_IMG(COW_ADDR_LIFT_101DDC56), 2u, (const CowU32[]){ 2u, 5u }, g->ecx, g->edx, param_4, 0u);
            if ((cVar1 != '\0') || (bVar4 != rd8((uint32_t)(param_1 + 0x18)))) {
              cVar1 = cow_bridge_101dd4e0(g, COW_IMG(COW_ADDR_LIFT_101DDC68), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, param_4, 0u);
              if (cVar1 == '\0') {
                cow_bridge_101dd5a0(g, COW_IMG(COW_ADDR_LIFT_101DDC7C), 3u, (const CowU32[]){ auStack_7c, 2, 5 }, g->ecx, g->edx, param_4, 0u);
              }
              else {
                auStack_7c[0] = 0;
              }
              cow_bridge_100e5980(g, COW_IMG(COW_ADDR_LIFT_101DDC92), 2u, (const CowU32[]){ (int)(int8_t)rd8((uint32_t)(param_1 + 0x17)), auStack_7c }, g->ecx, g->edx, param_4, 0u);
              wr8((uint32_t)(param_1 + 0x18), rd8((uint32_t)(param_1 + 0x17)));
            }
            g->eax = (CowU32)(1); return;
          }
          pbVar6 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1037F054) + 4u * (uint32_t)(iVar5 * 2)));
          pbVar3 = param_2;
          do {
            bVar4 = rd8((uint32_t)pbVar3);
            bVar7 = bVar4 < rd8((uint32_t)pbVar6);
            if (bVar4 != rd8((uint32_t)pbVar6)) {
    L_101ddbe4:
              iVar2 = (1 - (CowU32)bVar7) - (CowU32)(bVar7 != 0);
              goto L_101ddbe9;
            }
            if (bVar4 == 0) break;
            bVar4 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
            bVar7 = bVar4 < rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
            if (bVar4 != rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)))) goto L_101ddbe4;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar4 != 0);
          iVar2 = 0;
    L_101ddbe9:
          if (iVar2 == 0) goto L_101ddc02;
          iVar5 = iVar5 + 1;
        } while (iVar5 < 7);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 4 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 128 locals, pops [edi, esi, ebp, ebx], ret 8.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ddb80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_4;   /* 0x101ddb80: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x80u;                      /* 0x101ddb84: 128 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101ddb80(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
