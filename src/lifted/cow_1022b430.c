/* f_0x1022b430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022b430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022b430(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 psVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    CowU32 local_4;
    if (((param_1 == (CowU32)0x0) || (rd8((uint32_t)param_1) == '\0')) || (rd32(COW_IMG(COW_ADDR_LIFT_10667A74)) == 0)) {
        g->eax = (CowU32)(-1); return;
      }
      local_4 = 0;
      iVar7 = 0;
      do {
        iVar6 = (int)(int16_t)rd16((uint32_t)(iVar7 + rd32(COW_IMG(COW_ADDR_LIFT_10667A74))));
        iVar1 = iVar7 + rd32(COW_IMG(COW_ADDR_LIFT_10667A74));
        if ((iVar6 != 0) && ((param_2 == 0 || ((int16_t)rd16((uint32_t)(iVar1 + 2)) == param_2)))) {
          uVar5 = local_4;
          cow_bridge_1022bda0(g, COW_IMG(COW_ADDR_LIFT_1022B48A), 1u, (const CowU32[]){ local_4 }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = cow_bridge_1022bf10(g, COW_IMG(COW_ADDR_LIFT_1022B491), 0u, (const CowU32[]){ 0u }, uVar5, g->edx, g->eax, 0u);
          uVar5 = local_4;
          cow_bridge_1022bda0(g, COW_IMG(COW_ADDR_LIFT_1022B498), 2u, (const CowU32[]){ local_4, uVar3 }, g->ecx, g->edx, g->eax, 0u);
          uVar3 = cow_bridge_1022bf00(g, COW_IMG(COW_ADDR_LIFT_1022B49F), 0u, (const CowU32[]){ 0u }, uVar5, g->edx, g->eax, 0u);
          cVar2 = cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_10662F60), COW_IMG(COW_ADDR_LIFT_1022B4AB), 2u, (const CowU32[]){ param_1, uVar3 }, g->ecx, g->edx, g->eax, 12u);
          if (cVar2 != '\0') {
            iVar7 = 0;
            psVar4 = (CowU32)(iVar1 + 0xe);
            while (rd16((uint32_t)psVar4) == -1) {
              iVar7 = iVar7 + 1;
              psVar4 = psVar4 + 2u * (uint32_t)(1);
              if (0x17 < iVar7) {
                g->eax = (CowU32)(-1); return;
              }
            }
            if ((0 < iVar6) && (param_3 != '\0')) {
              iVar7 = cow_bridge_100f00a0(g, COW_IMG(COW_ADDR_LIFT_1022B504), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              if (iVar7 != 0) {
                uVar5 = local_4 & 0x80000007;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                }
                if ((rd8((uint32_t)(((int)(local_4 + ((int)local_4 >> 0x1f & 7U)) >> 3) + iVar7)) &
                    (CowU8)(1 << ((CowU8)uVar5 & 0x1f))) == 0) {
                  iVar6 = -2;
                }
              }
              cVar2 = cow_bridge_1022b7d0(g, COW_IMG(COW_ADDR_LIFT_1022B53F), 1u, (const CowU32[]){ iVar1 }, g->ecx, g->edx, g->eax, 4u);
              if (cVar2 == '\0') {
                g->eax = (CowU32)(-2); return;
              }
            }
            if (iVar6 == 0) {
              g->eax = (CowU32)(-1); return;
            }
            g->eax = (CowU32)(iVar6); return;
          }
        }
        iVar7 = iVar7 + 100;
        local_4 = local_4 + 1;
        if (0x18fff < iVar7) {
          g->eax = (CowU32)(-1); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022b430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1022b430: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1022b431: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1022b435: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1022b436: push ebp */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->eax = (uint32_t)(r); }   /* 0x1022b437: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022b43a: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022b43b: push edi */
    cow_lift_1022b430(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
