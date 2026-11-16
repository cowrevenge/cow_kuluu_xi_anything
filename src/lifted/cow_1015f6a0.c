/* f_0x1015f6a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1015f6a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1015f6a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    CowU32 pvVar3;
    CowU32 local_4;
    local_4 = param_1;
      cow_bridge_101604b0(g, COW_IMG(COW_ADDR_LIFT_1015F6AB), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10621944)) != (CowU32)0x0) {
        cow_bridge_101630e0(g, COW_IMG(COW_ADDR_LIFT_1015F6BA), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10621944)), g->edx, g->eax, 0u);
      }
      cow_bridge_10124bc0(g, COW_IMG(COW_ADDR_LIFT_1015F6C5), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)), g->edx, g->eax, 0u);
      if ((((int32_t)rd32((uint32_t)((int)param_1 + 0x54)) != 0) && ((int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 0x54)) + 0x88)) != 0)) &&
         (cVar1 = cow_bridge_1015dce0(g, COW_IMG(COW_ADDR_LIFT_1015F6DD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar1 == '\0')) {
        cow_bridge_10234930(g, COW_IMG(COW_ADDR_LIFT_1015F6E8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      cVar1 = '\0';
      pvVar3 = local_4;
      do {
        local_4 = pvVar3;
        local_4 = (CowU32)cow_bridge_10126500(g, COW_IMG(COW_ADDR_LIFT_1015F6F4), 0u, (const CowU32[]){ 0u }, 274864184u, g->edx, g->eax, 0u);
        while (local_4 != (CowU32)0x0) {
          pvVar3 = (CowU32)cow_bridge_1015ee00(g, COW_IMG(COW_ADDR_LIFT_1015F70B), 1u, (const CowU32[]){ (g->esp + 12u) }, 274864184u, g->edx, (g->esp + 12u), 0u);
          if (((pvVar3 != (CowU32)0x0) && ((int8_t)rd8((uint32_t)((int)pvVar3 + 0x60)) == cVar1)) &&
             ((cVar2 = cow_bridge_10160700(g, COW_IMG(COW_ADDR_LIFT_1015F71D), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u), cVar2 == '\0' ||
              ((rd8((uint32_t)((int)pvVar3 + 0x34)) & 0x40) != 0)))) {
            cow_bridge_101177d0(g, COW_IMG(COW_ADDR_LIFT_1015F72E), 0u, (const CowU32[]){ 0u }, pvVar3, g->edx, g->eax, 0u);
          }
        }
        cVar1 = cVar1 + '\x01';
        pvVar3 = (CowU32)0x0;
      } while (cVar1 < '\t');
      cow_bridge_10124eb0(g, COW_IMG(COW_ADDR_LIFT_1015F748), 0u, (const CowU32[]){ 0u }, rd32(COW_IMG(COW_ADDR_LIFT_104E1D4C)), g->edx, g->eax, 0u);
      cow_bridge_10160650(g, COW_IMG(COW_ADDR_LIFT_1015F74F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1015f6a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1015f6a0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1015f6a1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1015f6a2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1015f6a3: push edi */
    g->edi = g->ecx;   /* 0x1015f6a4: the value the entry loaded and the decompiler dropped */
    cow_lift_1015f6a0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
