/* f_0x10198fc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10198fc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10198fc0(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU32 uVar2;
    int iVar3;
    iVar3 = (int32_t)rd32((uint32_t)(param_1 + 0x14));
      if (iVar3 == 1) {
        iVar3 = 0;
      }
      else if (iVar3 == 2) {
        iVar3 = 1;
      }
      else if (iVar3 == 3) {
        iVar3 = 2;
      }
      else {
        iVar3 = param_2;
      }
      switch((short)param_2 + -3) {
      case 0:
        bVar1 = rd8((uint32_t)(iVar3 + 0x3c + param_1));
        if (bVar1 < 0xfb) {
          wr8((uint32_t)(iVar3 + 0x3c + param_1), bVar1 + 4);
        }
        else {
          if (bVar1 == 0xff) goto switchD_10198ff5_default;
          wr8((uint32_t)(iVar3 + 0x3c + param_1), 0xff);
        }
        break;
      case 1:
        bVar1 = rd8((uint32_t)(iVar3 + 0x3c + param_1));
        if (bVar1 < 4) {
          if (bVar1 == 0) goto switchD_10198ff5_default;
          wr8((uint32_t)(iVar3 + 0x3c + param_1), 0);
        }
        else {
          wr8((uint32_t)(iVar3 + 0x3c + param_1), bVar1 - 4);
        }
        break;
      case 2:
      case 3:
        wr32((uint32_t)(param_1 + 0x14), 0);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x62), 1);
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x85), 1);
      default:
        goto switchD_10198ff5_default;
      }
      uVar2 = cow_bridge_10199090(g, COW_IMG(COW_ADDR_LIFT_1019905B), 1u, (const CowU32[]){ param_1 + 0x3c }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 0x38), uVar2);
    switchD_10198ff5_default:
      cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_1019906F), 2u, (const CowU32[]){ rd16((uint32_t)(param_1 + 0x34)), 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101186a0(g, COW_IMG(COW_ADDR_LIFT_10199076), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
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
void cow_adapter_10198fc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10198fc0: push esi */
    g->esi = g->ecx;   /* 0x10198fc1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10198fc3: push edi */
    g->edx = 1u;   /* 0x10198fc4: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10198fc9: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x10198fcc: register eax, replayed as the entry ran it */
    cow_lift_10198fc0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
