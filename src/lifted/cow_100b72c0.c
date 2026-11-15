/* f_0x100b72c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100b72c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100b72c0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    char cVar3;
    uVar1 = rd16((uint32_t)(param_1 + 0x256));
      cVar3 = (int8_t)rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1 + (CowU32)uVar1));
      switch(cVar3) {
      case '\0':
      case '\x01':
        iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)(param_1 + 2)))));
        if (iVar2 != 0) {
          wr32((uint32_t)(iVar2 + 0x124), rd32((uint32_t)(iVar2 + 0x124)) ^ ((int)cVar3 << 0x1d ^ rd32((uint32_t)(iVar2 + 0x124))) & 0x20000000);
        }
        wr16((uint32_t)(param_1 + 0x256), (int16_t)rd16((uint32_t)(param_1 + 0x256)) + 2);
        return;
      case '\x02':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b5510(g, COW_IMG(COW_ADDR_LIFT_100B733B), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case '\x03':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b5210(g, COW_IMG(COW_ADDR_LIFT_100B7354), 3u, (const CowU32[]){ 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case '\x04':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b5210(g, COW_IMG(COW_ADDR_LIFT_100B736D), 3u, (const CowU32[]){ 1u, 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case '\x05':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b5210(g, COW_IMG(COW_ADDR_LIFT_100B7386), 3u, (const CowU32[]){ 0u, 0u, 1u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case '\x06':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b5210(g, COW_IMG(COW_ADDR_LIFT_100B739F), 3u, (const CowU32[]){ 1u, 0u, 1u }, g->ecx, g->edx, g->eax, 0u);
        break;
      case '\a':
        wr16((uint32_t)(param_1 + 0x256), uVar1 + 1);
        cVar3 = cow_bridge_100b4e10(g, COW_IMG(COW_ADDR_LIFT_100B73B6), 2u, (const CowU32[]){ 0u, 1u }, g->ecx, g->edx, g->eax, 0u);
        break;
      default:
        goto switchD_100b72e9_default;
      }
      if (cVar3 == '\0') {
        wr16((uint32_t)(param_1 + 0x256), uVar1);
      }
    switchD_100b72e9_default:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100b72c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100b72c0: push esi */
    g->esi = g->ecx;   /* 0x100b72c1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100b72c3: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x256u); g->edi = (g->edi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100b72c4: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100b72cb: register ecx, replayed as the entry ran it */
    g->eax = g->edi;   /* 0x100b72ce: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x100b72d0: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + g->eax + 0x1u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100b72d5: register ecx, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x100b72d9: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0xFFu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x100b72db: register eax, replayed as the entry ran it */
    cow_lift_100b72c0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
