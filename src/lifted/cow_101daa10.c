/* f_0x101daa10 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101daa10 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101daa10(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_10663428)) + 0x7ec;
      switch(param_2) {
      case 1:
        cow_bridge_101d7660(g, COW_IMG(COW_ADDR_LIFT_101DAA4B), 1u, (const CowU32[]){ rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663428)) + 0x8c8)) }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101da6a0(g, COW_IMG(COW_ADDR_LIFT_101DAA62), 1u, (const CowU32[]){ rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663428)) + 0x8c8)) }, g->edi, g->edx, g->eax, 0u);
        goto switchD_101daa2f_default;
      case 2:
        cow_bridge_10104170(g, COW_IMG(COW_ADDR_LIFT_101DAA71), 3u, (const CowU32[]){ iVar1, 5, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) == 0) goto switchD_101daa2f_default;
        uVar3 = 0;
        uVar4 = 5;
        break;
      case 3:
        cow_bridge_10104170(g, COW_IMG(COW_ADDR_LIFT_101DAA95), 3u, (const CowU32[]){ iVar1, 6, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) == 0) goto switchD_101daa2f_default;
        uVar3 = 0;
        uVar4 = 6;
        break;
      case 4:
        cow_bridge_10104170(g, COW_IMG(COW_ADDR_LIFT_101DAAB9), 3u, (const CowU32[]){ iVar1, 2, 0xffffffff }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) == 0) goto switchD_101daa2f_default;
        uVar3 = 0;
        uVar4 = 2;
        break;
      case 5:
        if ((rd32(COW_IMG(COW_ADDR_LIFT_10485824)) & 1) == 0) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101DAAE1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_101040e0(g, COW_IMG(COW_ADDR_LIFT_101DAAFF), 5u, (const CowU32[]){ iVar1, 4, rd32(COW_IMG(COW_ADDR_LIFT_10485640)) & 0xff, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) == 0) goto switchD_101daa2f_default;
        uVar3 = rd32(COW_IMG(COW_ADDR_LIFT_10485640)) & 0xff;
        uVar4 = 4;
        break;
      case 6:
        iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x40da8)))));
        if (iVar2 == 0) {
          cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101DAB3C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        cow_bridge_101040e0(g, COW_IMG(COW_ADDR_LIFT_101DAB55), 5u, (const CowU32[]){ iVar1, 3, (int)(int8_t)rd8((uint32_t)(iVar2 + 0xef)), 0, 0 }, g->ecx, g->edx, g->eax, 0u);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) == 0) goto switchD_101daa2f_default;
        uVar3 = (CowU32)(int8_t)rd8((uint32_t)(iVar2 + 0xef));
        uVar4 = 3;
        break;
      default:
        goto switchD_101daa2f_default;
      }
      cow_bridge_101d76f0(g, COW_IMG(COW_ADDR_LIFT_101DAB81), 3u, (const CowU32[]){ rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663428)) + 0x8c8)), uVar4, uVar3 }, g->ecx, g->edx, g->eax, 0u);
    switchD_101daa2f_default:
      cow_bridge_101d8140(g, COW_IMG(COW_ADDR_LIFT_101DAB90), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101DAB9F), 1u, (const CowU32[]){ 272100964u }, 274864184u, g->edx, g->eax, 0u);
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101DABAF), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101daa10(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_10663428));   /* 0x101daa10: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101daa16: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101daa17: push edi */
    g->edi = g->ecx;   /* 0x101daa18: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101daa1a: register ecx, replayed as the entry ran it */
    { { uint32_t a = g->ecx; uint32_t r = (uint32_t)(a - 1u); g->ecx = (uint32_t)(r); }; }   /* 0x101daa1f: register ecx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->edx + 0x7ECu)); }   /* 0x101daa20: register eax, replayed as the entry ran it */
    cow_lift_101daa10(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
