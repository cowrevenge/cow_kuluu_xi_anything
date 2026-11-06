/* f_0x102705f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102705f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102705f0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099AED0)) + param_1 * 0xac;
      iVar2 = rd32((uint32_t)(param_2 + 0x58)) * 0x14;
      if (0 < iVar2) {
        iVar2 = cow_bridge_10275da0(g, COW_IMG(COW_ADDR_LIFT_10270631), 4u, (const CowU32[]){ 1, iVar2, COW_IMG(COW_ADDR_LIFT_103B1B60), 0xe66 }, g->ecx, g->edx, g->eax, 16u);
        wr32((uint32_t)(iVar1 + 0xa4), iVar2);
        if (iVar2 != 0) {
          iVar2 = rd32((uint32_t)(param_2 + 0x58));
          iVar3 = 0;
          wr32((uint32_t)(iVar1 + 0x8c), iVar2);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              iVar3 = iVar3 + 1;
              wr32((uint32_t)(iVar2 + rd32((uint32_t)(iVar1 + 0xa4))), 0);
              wr32((uint32_t)(rd32((uint32_t)(iVar1 + 0xa4)) + 4 + iVar2), 0x3e4ccccd);
              wr32((uint32_t)(rd32((uint32_t)(iVar1 + 0xa4)) + 8 + iVar2), 0x3e4ccccd);
              wr32((uint32_t)(rd32((uint32_t)(iVar1 + 0xa4)) + 0xc + iVar2), 0x3e4ccccd);
              wr32((uint32_t)(rd32((uint32_t)(iVar1 + 0xa4)) + 0x10 + iVar2), 0x3f800000);
              iVar2 = iVar2 + 0x14;
            } while (iVar3 < rd32((uint32_t)(iVar1 + 0x8c)));
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102705f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->ecx = param_1;   /* 0x102705f0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102705f4: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102705f5: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102705f6: register edi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->ecx * 8)); }   /* 0x102705fa: register eax, replayed as the entry ran it */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_1099AED0));   /* 0x10270601: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10270607: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x10270609: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->ecx + g->eax * 2)); }   /* 0x1027060c: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x58u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1027060f: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x10270612: register eax, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->edx + g->ecx * 4)); }   /* 0x10270615: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x10270618: register eax, replayed as the entry ran it */
    cow_lift_102705f0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
