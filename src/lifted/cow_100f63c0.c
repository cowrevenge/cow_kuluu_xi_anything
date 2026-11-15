/* f_0x100f63c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f63c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f63c0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    short sVar2;
    CowU32 pbVar3;
    int iVar4;
    CowU32 pbVar5;
    int iVar6;
    CowU32 pbVar7;
    CowU8 abStack_68[2];
    short sStack_66;
    CowU32 uStack_58;
    CowU8 abStack_50[80];
    _Bool bVar8;
      
      if (rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) == (CowU32)0x0) {
        pbVar3 = (CowU32)0x0;
      }
      else {
        pbVar3 = (CowU32)cow_bridge_100db6d0(g, COW_IMG(COW_ADDR_LIFT_100F63DD), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103601BC)) + 0x80)) }, g->ecx, param_1, g->eax, 0u);
      }
      switch(param_2) {
      case 0:
        g->eax = (CowU32)('\x16'); return;
      case 1:
        break;
      case 2:
        g->eax = (CowU32)('\x06'); return;
      case 3:
        g->eax = (CowU32)('\x03'); return;
      default:
        g->eax = (CowU32)('\x15'); return;
      }
      wr32((uint32_t)(param_1 + 0xd8), 0xfffffffe);
      if ((pbVar3 == (CowU32)0x0) || (rd8((uint32_t)pbVar3) == 0)) {
        g->eax = (CowU32)('\a'); return;
      }
      iVar6 = 0;
      do {
        iVar4 = cow_bridge_1030ffe1(g, COW_IMG(COW_ADDR_LIFT_100F6438), 2u, (const CowU32[]){ iVar6, abStack_68 }, g->ecx, g->edx, g->eax, 8u);
        if (((-1 < iVar4) && ((abStack_68[0] & 1) != 0)) && (sVar2 = cow_bridge_1031012b(g, COW_IMG(COW_ADDR_LIFT_100F644B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), sVar2 == sStack_66)
           ) {
          pbVar5 = abStack_50;
          pbVar7 = pbVar3;
          do {
            bVar1 = rd8((uint32_t)pbVar5);
            bVar8 = bVar1 < rd8((uint32_t)pbVar7);
            if (bVar1 != rd8((uint32_t)pbVar7)) {
    code_r0x100f647c:
              iVar4 = (1 - (CowU32)bVar8) - (CowU32)(bVar8 != 0);
              goto code_r0x100f6481;
            }
            if (bVar1 == 0) break;
            bVar1 = rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
            bVar8 = bVar1 < rd8((uint32_t)(pbVar7 + 1u * (uint32_t)(1)));
            if (bVar1 != rd8((uint32_t)(pbVar7 + 1u * (uint32_t)(1)))) goto code_r0x100f647c;
            pbVar5 = pbVar5 + 2;
            pbVar7 = pbVar7 + 2;
          } while (bVar1 != 0);
          iVar4 = 0;
    code_r0x100f6481:
          if (iVar4 == 0) {
            if ((uStack_58 & 0x8000) == 0) {
              g->eax = (CowU32)('\a'); return;
            }
            wr32((uint32_t)(param_1 + 0xd8), iVar6);
            wr32((uint32_t)(param_1 + 0xd4), uStack_58 >> 0x10 & 0x3f);
            goto code_r0x100f64c5;
          }
        }
        iVar6 = iVar6 + 1;
        if (0x3f < iVar6) {
    code_r0x100f64c5:
          g->eax = (CowU32)((-((int32_t)rd32((uint32_t)(param_1 + 0xd8)) != -2) & 0x10U) + 7); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 104 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f63c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_103601BC));   /* 0x100f63c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x68u;                      /* 0x100f63c6: 104 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* push ebx (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_100f63c0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
