/* f_0x1022d510 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1022d510 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1022d510(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU16 uVar2;
    CowU32 uVar3;
    uVar3 = 0;
      switch(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1033C4A4) + 4u * (uint32_t)((CowU8)(((int8_t)rd8((uint32_t)(param_1 + 0x1c)) == '\x01') + (int8_t)rd8((uint32_t)(param_1 + 0x10)) * '\x02'))))) {
      case 0:
        wr32((uint32_t)(param_1 + 8), 1);
        return;
      case 1:
        wr32((uint32_t)(param_1 + 8), 2);
        return;
      case 2:
        wr32((uint32_t)(param_1 + 8), 3);
        return;
      case 4:
        if ((((int32_t)rd32((uint32_t)(param_1 + 0x14)) == 0) ||
            (uVar2 = cow_bridge_10086fd0(g, COW_IMG(COW_ADDR_LIFT_1022D580), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(param_1 + 0x14)) }, g->ecx, g->edx, g->eax, 4u), uVar2 == 0)) ||
           (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar2))) == 0)) goto switchD_1022d540_default;
        cVar1 = cow_bridge_101cc220(g, COW_IMG(COW_ADDR_LIFT_1022D59E), 1u, (const CowU32[]){ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(uVar2))) }, g->ecx, g->edx, g->eax, 4u);
        if (cVar1 == '\0') {
          wr32((uint32_t)(param_1 + 8), ((int8_t)rd8((uint32_t)(param_1 + 0x1c)) != '\0') + 2);
          return;
        }
      case 3:
        wr32((uint32_t)(param_1 + 8), 7);
        return;
      case 5:
        wr32((uint32_t)(param_1 + 8), ((int8_t)rd8((uint32_t)(param_1 + 0x1c)) != '\0') + 5);
        return;
      case 6:
        uVar3 = 8;
      default:
    switchD_1022d540_default:
        wr32((uint32_t)(param_1 + 8), uVar3);
        return;
      case 7:
        wr32((uint32_t)(param_1 + 8), 9);
        return;
      }
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1022d510(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1022d510: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022d511: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1022d512: register edi, replayed as the entry ran it */
    g->esi = 0u;   /* 0x1022d516: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x1Cu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1022d518: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi + 0x10u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1022d51b: register edx, replayed as the entry ran it */
    cow_lift_1022d510(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
