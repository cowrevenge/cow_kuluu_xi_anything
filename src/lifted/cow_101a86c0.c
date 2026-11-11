/* f_0x101a86c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a86c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a86c0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU8 bVar2;
    CowU8 bVar3;
    char cVar4;
    int iVar5;
    iVar5 = 0;
      bVar3 = rd8((uint32_t)(param_1 + 0x66c));
      while( 1 ) {
        if (((rd8((uint32_t)(param_1 + 0x644 + (CowU32)bVar3 * 2)) == -1) ||
            (bVar2 = rd8((uint32_t)(param_1 + 0x645 + (CowU32)bVar3 * 2)), bVar2 == 0xff)) || (0x12 < iVar5))
        break;
        iVar5 = iVar5 + 1;
        bVar3 = bVar2;
        if (0x13 < iVar5) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
        }
      }
      uVar1 = (CowU32)bVar3 * 0x50 + 4 + param_1;
      cow_bridge_101a85d0(g, COW_IMG(COW_ADDR_LIFT_101A8724), 2u, (const CowU32[]){ uVar1, param_2 }, g->ecx, g->edx, g->eax, 0u);
      cVar4 = cow_bridge_101a8610(g, COW_IMG(COW_ADDR_LIFT_101A8734), 2u, (const CowU32[]){ bVar3, param_3 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(~-(CowU32)(cVar4 != '\x01') & uVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ecx, ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a86c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101a86c0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101a86c1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a86c2: push esi */
    g->esi = g->ecx;   /* 0x101a86c3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101a86c5: push edi */
    g->ecx = 0u;   /* 0x101a86c6: the value the entry loaded and the decompiler dropped */
    g->edx = 255u;   /* 0x101a86c8: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x66Cu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x101a86cd: register eax, replayed as the entry ran it */
    cow_lift_101a86c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
