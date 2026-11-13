/* f_0x10114500 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10114500 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10114500(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU16 uVar6;
    CowU32 uVar7;
    CowU32 puVar8;
    CowU8 local_20[32];
    if (rd16((uint32_t)(param_1 + 0x230)) == ((int16_t)rd16((uint32_t)(param_1 + 0x232)) + 1U & 7)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = (CowU8)((char)rd16((uint32_t)(param_1 + 0x230)) - 1) & 7;
      }
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_1011453F), 3u, (const CowU32[]){ local_20, COW_IMG(COW_ADDR_LIFT_1036C084), (int)(short)uVar6 }, g->ecx, g->edx, g->eax, 12u);
      if ((-1 < (short)uVar6) && (cVar1 = cow_bridge_101c4c70(g, COW_IMG(COW_ADDR_LIFT_1011455B), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u), cVar1 != '\0')) {
        iVar5 = 0;
        iVar2 = cow_bridge_101c4b40(g, COW_IMG(COW_ADDR_LIFT_10114575), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u);
        if (0 < iVar2) {
          if (0x240 < iVar2) {
            iVar3 = 0x240;
            do {
              iVar3 = iVar3 + 0x120;
              iVar5 = iVar5 + 0x120;
            } while (iVar3 < iVar2);
          }
          if (iVar5 + 0x48 <= iVar2) {
            do {
              uVar7 = iVar2 - iVar5;
              if (0x11f < uVar7) {
                uVar7 = 0x120;
              }
              uVar4 = cow_bridge_101c47b0(g, COW_IMG(COW_ADDR_LIFT_101145D6), 4u, (const CowU32[]){ local_20, (CowU32)(param_1 + 0x110), uVar7, iVar5 }, g->ecx, g->edx, g->eax, 0u);
              if ((int)uVar4 < 1) {
                return;
              }
              iVar5 = iVar5 + uVar4;
              if ((int)uVar7 < (int)uVar4) {
                uVar7 = uVar4;
              }
              if (0x47 < uVar7) {
                uVar7 = uVar7 / 0x48;
                puVar8 = (CowU32)(param_1 + 0x110);
                do {
                  cow_bridge_1010feb0(g, COW_IMG(COW_ADDR_LIFT_10114600), 2u, (const CowU32[]){ (int)(int16_t)rd16((uint32_t)(puVar8 + 4u * (uint32_t)(1))), rd32((uint32_t)puVar8) }, g->ecx, g->edx, g->eax, 8u);
                  puVar8 = puVar8 + 4u * (uint32_t)(0x12);
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
            } while (iVar5 + 0x48 <= iVar2);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 36 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10114500(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x24u;                      /* 0x10114500: 36 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10114503: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10114504: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10114505: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10114506: push edi */
    g->edi = g->ecx;   /* 0x10114507: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x232u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10114509: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x230u); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10114510: register eax, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a + 1u); g->ecx = (uint32_t)(r); }; }   /* 0x10114517: register ecx, replayed as the entry ran it */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x7u; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x10114518: register ecx, replayed as the entry ran it */
    cow_lift_10114500(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
