/* f_0x10001f40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10001f40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10001f40(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar3;
    CowU32 pcVar4;
    CowU32 uVar5;
    _Bool bVar2;
      _Bool bVar6;
      
      if (rd32(COW_IMG(COW_ADDR_LIFT_103D3C88)) != 0) {
        uVar5 = 0xffffffff;
        pcVar4 = param_1;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = rd8((uint32_t)pcVar4);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar3 = cow_bridge_10311ef0(g, COW_IMG(COW_ADDR_LIFT_10001F69), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103D3C88)), param_1 }, g->ecx, g->edx, 0u, 8u);
        if (iVar3 != 0) {
          for (iVar3 = cow_bridge_10311ef0(g, COW_IMG(COW_ADDR_LIFT_10001F7C), 2u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103D3C88)), param_1 }, g->ecx, g->edx, g->eax, 8u); iVar3 != 0;
              iVar3 = cow_bridge_10311ef0(g, COW_IMG(COW_ADDR_LIFT_10001FC9), 2u, (const CowU32[]){ iVar3 + 1, param_1 }, g->ecx, g->edx, g->eax, 8u)) {
            cVar1 = (int8_t)rd8((uint32_t)(iVar3 + (~uVar5 - 1)));
            if ((((((cVar1 == ' ') || (cVar1 == '\0')) || (cVar1 == '0')) ||
                 ((cVar1 == '1' || (cVar1 == '2')))) ||
                (((cVar1 == '3' || ((cVar1 == '4' || (cVar1 == '5')))) || (cVar1 == '6')))) ||
               (((cVar1 == '7' || (cVar1 == '8')) || (cVar1 == '9')))) {
              pcVar4 = (CowU32)(iVar3 + (~uVar5 - 1));
              if (param_2 == (CowU32)0x0) {
                g->eax = (CowU32)(pcVar4); return;
              }
              bVar2 = 0;
              goto L_10001fe5;
            }
          }
        }
      }
      g->eax = (CowU32)((CowU32)0x0); return;
    L_10001fe5:
      if (bVar2) {
        if (param_3 == 0) {
          cVar1 = rd8((uint32_t)pcVar4);
          if ((cVar1 == ' ') || (cVar1 == '\0')) {
    L_10002023:
            wr8((uint32_t)param_2, '\0');
            g->eax = (CowU32)(pcVar4); return;
          }
          bVar6 = cVar1 == '\t';
        }
        else {
          param_3 = param_3 + -1;
          bVar6 = param_3 == 0;
        }
        if (bVar6) goto L_10002023;
        wr8((uint32_t)param_2, rd8((uint32_t)pcVar4));
        param_2 = param_2 + 1;
      }
      else {
        cVar1 = rd8((uint32_t)pcVar4);
        if (((cVar1 != ' ') && (cVar1 != '\0')) && (cVar1 != '\t')) {
          wr8((uint32_t)param_2, cVar1);
          param_2 = param_2 + 1;
          bVar2 = 1;
          pcVar4 = pcVar4 + 1;
          goto L_10001fe5;
        }
      }
      pcVar4 = pcVar4 + 1;
      goto L_10001fe5;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10001f40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_103D3C88));   /* 0x10001f40: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10001f46: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10001f40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
