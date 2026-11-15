/* f_0x102c5728 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c5728 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c5728(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 pcVar4;
    CowU8 local_10c[256];
    CowU8 local_c[2];
    CowU8 local_a[2];
    CowU8 local_8[4];
    if ((rd32((uint32_t)(param_1 + 0x68)) & 1) != 0) {
        if ((rd32((uint32_t)(param_1 + 0x68)) & 4) == 0) {
          if ((param_2 == 0) || ((rd8((uint32_t)(param_2 + 8)) & 0x10) == 0)) goto L_102c574e;
          pcVar4 = COW_IMG(COW_ADDR_LIFT_103C8E7C);
        }
        else {
          pcVar4 = COW_IMG(COW_ADDR_LIFT_103C8E94);
        }
        goto L_102c58a6;
      }
      cow_bridge_102bc97e(g, COW_IMG(COW_ADDR_LIFT_102C574C), 2u, (const CowU32[]){ g->esi, 272404168u }, param_1, g->edx, g->eax, 0u);
    L_102c574e:
      cVar1 = (int8_t)rd8((uint32_t)(param_1 + 0x126));
      if (cVar1 == '\x03') {
        if ((rd8((uint32_t)(param_1 + 0x68)) & 2) == 0) {
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C5770), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C8EAC) }, g->ecx, g->edx, g->eax, 0u);
    L_102c57b2:
          if (param_3 != 0) {
            cow_bridge_102c4595(g, COW_IMG(COW_ADDR_LIFT_102C57D5), 3u, (const CowU32[]){ param_1, local_10c, param_3 }, g->ecx, g->edx, g->eax, 12u);
            wr16((uint32_t)(param_1 + 0x11a), (short)param_3);
            goto L_102c5871;
          }
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C57AC), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C8E48) }, g->ecx, g->edx, g->eax, 0u);
        }
        else {
          if (param_3 <= rd16((uint32_t)(param_1 + 0x118))) goto L_102c57b2;
          cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C57C1), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103C8E60) }, g->ecx, g->edx, g->eax, 0u);
        }
    L_102c58af:
        cow_bridge_102c45b9(g, COW_IMG(COW_ADDR_LIFT_102C5879), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        if (cVar1 == '\x02') {
          if (param_3 != 6) {
    L_102c5842:
            pcVar4 = COW_IMG(COW_ADDR_LIFT_103C8E60);
    L_102c58a6:
            cow_bridge_102bca0a(g, COW_IMG(COW_ADDR_LIFT_102C58AC), 2u, (const CowU32[]){ param_1, pcVar4 }, g->ecx, g->edx, g->eax, 0u);
            goto L_102c58af;
          }
          cow_bridge_102c4595(g, COW_IMG(COW_ADDR_LIFT_102C57FA), 3u, (const CowU32[]){ param_1, local_c, 6 }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x11a), 1);
          uVar2 = cow_bridge_102c4582(g, COW_IMG(COW_ADDR_LIFT_102C580C), 1u, (const CowU32[]){ local_c }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x18e), uVar2);
          uVar2 = cow_bridge_102c4582(g, COW_IMG(COW_ADDR_LIFT_102C581C), 1u, (const CowU32[]){ local_a }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 400), uVar2);
          uVar2 = cow_bridge_102c4582(g, COW_IMG(COW_ADDR_LIFT_102C582C), 1u, (const CowU32[]){ local_8 }, g->ecx, g->edx, g->eax, 24u);
          wr16((uint32_t)(param_1 + 0x192), uVar2);
        }
        else {
          if (cVar1 != '\0') {
            pcVar4 = COW_IMG(COW_ADDR_LIFT_103C8E1C);
            goto L_102c58a6;
          }
          if (param_3 != 2) goto L_102c5842;
          cow_bridge_102c4595(g, COW_IMG(COW_ADDR_LIFT_102C5855), 3u, (const CowU32[]){ param_1, local_c, 2 }, g->ecx, g->edx, g->eax, 0u);
          wr16((uint32_t)(param_1 + 0x11a), 1);
          uVar2 = cow_bridge_102c4582(g, COW_IMG(COW_ADDR_LIFT_102C5867), 1u, (const CowU32[]){ local_c }, g->ecx, g->edx, g->eax, 16u);
          wr16((uint32_t)(param_1 + 0x194), uVar2);
        }
    L_102c5871:
        iVar3 = cow_bridge_102c45b9(g, COW_IMG(COW_ADDR_LIFT_102C58B5), 2u, (const CowU32[]){ param_1, 0 }, g->ecx, g->edx, g->eax, 16u);
        if (iVar3 == 0) {
          cow_bridge_102c88a1(g, COW_IMG(COW_ADDR_LIFT_102C589C), 5u, (const CowU32[]){ param_1, param_2, local_10c, (CowU32)rd16((uint32_t)(param_1 + 0x11a)), param_1 + 0x18c }, g->ecx, g->edx, g->eax, 20u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c5728(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c5728: push ebp */
    g->ebp = g->esp;                       /* 0x102c5729: mov ebp, esp */
    g->esp -= 0x108u;                      /* 0x102c572b: 264 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102c5731: push ebx */
    g->ebx = param_3;   /* 0x102c5732: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c5735: push esi */
    g->esi = param_2;   /* 0x102c5736: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102c5739: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x68u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102c573a: register eax, replayed as the entry ran it */
    cow_lift_102c5728(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
