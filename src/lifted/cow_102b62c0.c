/* f_0x102b62c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102b62c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102b62c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 puVar6;
    int iVar7;
    iVar7 = param_1;
      iVar3 = cow_bridge_102ba520(g, COW_IMG(COW_ADDR_LIFT_102B62D5), 2u, (const CowU32[]){ g->ecx, g->eax }, g->ecx, g->edx, g->eax, 0u);
      iVar5 = 0;
      if ((int32_t)rd32((uint32_t)(param_1 + 0x34)) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x34)) + 0x54));
      }
      wr32((uint32_t)(iVar3 + 0xc), uVar4);
      piVar1 = (CowU32)(param_1 + 0x4c);
      if (rd32((uint32_t)piVar1) == 0) {
        if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))))) {
          iVar7 = 2;
          do {
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6319), 3u, (const CowU32[]){ iVar3, iVar7 + -2, iVar7 + -2 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6327), 3u, (const CowU32[]){ iVar3, iVar7 + -1, iVar7 + -1 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6331), 3u, (const CowU32[]){ iVar3, iVar7, iVar7 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B633F), 3u, (const CowU32[]){ iVar3, iVar7 + 1, iVar7 + 1 }, g->ecx, g->edx, g->eax, 0u);
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + 4;
          } while (((int32_t)(iVar5) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)))));
        }
      }
      else {
        piVar2 = (CowU32)(param_1 + 0x44);
        param_1 = 0;
        if (0 < rd32((uint32_t)piVar2)) {
          iVar5 = 2;
          puVar6 = (CowU32)(rd32((uint32_t)piVar1) + 8);
          do {
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6374), 3u, (const CowU32[]){ iVar3, iVar5 + -2, rd32((uint32_t)(puVar6 + 4u * (uint32_t)(-2))) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B637F), 3u, (const CowU32[]){ iVar3, iVar5 + -1, rd32((uint32_t)(puVar6 + 4u * (uint32_t)(-1))) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6387), 3u, (const CowU32[]){ iVar3, iVar5, rd32((uint32_t)puVar6) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102ba9d0(g, COW_IMG(COW_ADDR_LIFT_102B6392), 3u, (const CowU32[]){ iVar3, iVar5 + 1, rd32((uint32_t)(puVar6 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
            param_1 = param_1 + 1;
            puVar6 = puVar6 + 4u * (uint32_t)(4);
            iVar5 = iVar5 + 4;
          } while (((int32_t)(param_1) < (int32_t)((int32_t)rd32((uint32_t)(iVar7 + 0x44)))));
          g->eax = (CowU32)(iVar3); return;
        }
      }
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102b62c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102b62c0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102b62c1: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102b62c2: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102b62c6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102b62c7: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x48u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102b62c8: register ecx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->ebp + 0x14u)); }   /* 0x102b62cb: register eax, replayed as the entry ran it */
    cow_lift_102b62c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
