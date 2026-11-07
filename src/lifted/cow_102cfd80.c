/* f_0x102cfd80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102cfd80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102cfd80(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 pfVar4;
    CowU32 pfVar5;
    float fVar6;
    iVar3 = 6;
      fVar6 = (float)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344E4C) +
                              ((((CowU32)(param_2 * 0x2b0000) >> 0x17) + param_1) * 3 - param_2) * 4)) -
                     (param_2 * 0x2b0000 & 0x7f800000U));
      pfVar5 = param_4;
      if (param_1 == 1) {
        do {
          pfVar4 = pfVar5 + 8;
          iVar3 = iVar3 + rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344CF0) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(7))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(6))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(5))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(4))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) * 2) * 2) * 2) * 4)) +
                          rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344CF0) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(3))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(2))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  (((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(1))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) +
                                  ((CowU32)(fVar6 * rdf32((uint32_t)pfVar5) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & 1) * 2) * 2) * 2) * 4));
          pfVar5 = pfVar4;
        } while (pfVar4 != param_4 + param_3);
        g->eax = (CowU32)(iVar3); return;
      }
      iVar1 = rd32((uint32_t)(COW_ADDR_LIFT_103CC0C8 + 4u * (uint32_t)(param_1 * 2)));
      uVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10344E9C) + param_1 * 4));
      do {
        pfVar4 = pfVar5 + 8;
        iVar3 = iVar3 + rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(7))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(6))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(5))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(4))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(3))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(2))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)(pfVar5 + 4u * (uint32_t)(1))) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8)) +
                        rd32((uint32_t)(iVar1 + 4 + ((CowU32)(fVar6 * rdf32((uint32_t)pfVar5) + rd32(COW_IMG(COW_ADDR_LIFT_10343990))) & uVar2) * 8));
        pfVar5 = pfVar4;
      } while (pfVar4 != param_4 + param_3);
      g->eax = (CowU32)(iVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 20 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102cfd80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 0x14u;                      /* 0x102cfd80: 20 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102cfd83: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102cfd84: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102cfd85: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->esi = (uint32_t)(rd32(A)); }   /* 0x102cfd86: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102cfd8a: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102cfd8e: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi * 8)); }   /* 0x102cfd8f: register ecx, replayed as the entry ran it */
    g->eax = 6u;   /* 0x102cfd96: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)g->esi; uint32_t r = (uint32_t)(a - b); g->ecx = (uint32_t)(r); }   /* 0x102cfd9b: register ecx, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->ecx * 2)); }   /* 0x102cfd9d: register ecx, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + g->ecx * 2)); }   /* 0x102cfda0: register ecx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x10u) & 31u; if (c) { uint32_t a = g->ecx; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->ecx = (uint32_t)(r); } }; }   /* 0x102cfda3: register ecx, replayed as the entry ran it */
    g->edx = g->ecx;   /* 0x102cfda6: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x7F800000u; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x102cfda8: register ecx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x17u) & 31u; if (c) { uint32_t a = g->edx; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->edx = (uint32_t)(r); } }; }   /* 0x102cfdae: register edx, replayed as the entry ran it */
    cow_lift_102cfd80(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
