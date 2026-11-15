/* f_0x100e8c70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e8c70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e8c70(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    char cVar2;
    CowU32 uVar4;
    int local_8;
    _Bool bVar3;
      
      cVar2 = (int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9800));
      bVar3 = 0;
      if (cVar2 == '\0') {
        bVar3 = 1;
      }
      else {
        if (cVar2 == '\x01') {
          local_8 = 1;
          goto L_100e8cb6;
        }
        if (cVar2 != '\x05') {
          g->eax = (CowU32)(0); return;
        }
      }
      local_8 = 0;
    L_100e8cb6:
      uVar4 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc));
      if (0x13 < uVar4) {
        g->eax = (CowU32)(0); return;
      }
      do {
        if (((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9548 + (uVar4 + local_8 * 0x19) * 4)) != 0) &&
           (iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + (CowU32)rd8((uint32_t)(uVar4 + local_8 * 100 + 0x9534 + rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)))) * 0x70
                    + 0x57d8 + local_8 * 0x8c4, (int32_t)rd32((uint32_t)(iVar1 + 0x14)) != 0)) {
          cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100E8D25), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100E8D33), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((!bVar3) || (((rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97f8)) ^ rd32((uint32_t)(iVar1 + 0x34))) & 3) == 0)) {
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc), (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc)) + 1);
            if ((int8_t)rd8((uint32_t)(iVar1 + 2)) == '\0') {
              cow_bridge_100e9550(g, COW_IMG(COW_ADDR_LIFT_100E8D97), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
            }
            g->eax = (CowU32)(iVar1); return;
          }
        }
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc), (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc)) + 1);
        uVar4 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97fc));
        if (0x13 < uVar4) {
          g->eax = (CowU32)(0); return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e8c70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x8u;                      /* 0x100e8c70: 8 bytes of locals */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100e8c73: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100e8c79: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100e8c7b: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e8c7c: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x9800u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100e8c7d: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100e8c83: push edi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x0u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x100e8c84: register eax, replayed as the entry ran it */
    cow_lift_100e8c70(g);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
