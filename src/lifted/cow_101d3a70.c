/* f_0x101d3a70 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d3a70 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d3a70(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    short sVar3;
    CowU16 uVar4;
    int iVar5;
    int local_4;
    _Bool bVar2;
      
      iVar5 = (CowU32)(param_4 == 9) * 0x51 + (param_3 & 0xff);
      local_4 = 0;
      bVar2 = 0;
      piVar1 = (CowU32)(param_1 + 0x4c + iVar5 * 4);
      if ((int32_t)rd32((uint32_t)(param_1 + 0x4c + iVar5 * 4)) != 0) {
        bVar2 = 0;
        if ((int16_t)rd16((uint32_t)(param_1 + 0x7e6)) != 0) {
          sVar3 = cow_bridge_101cd990(g, COW_IMG(COW_ADDR_LIFT_101D3ABF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          if ((int16_t)rd16((uint32_t)(param_1 + 0x7e6)) == sVar3) {
            wr16((uint32_t)(param_1 + 0x7e6), 0);
            bVar2 = 1;
          }
        }
        iVar5 = rd32((uint32_t)piVar1);
        local_4 = (int)(int8_t)rd8((uint32_t)(iVar5 + 4));
        if (iVar5 != 0) {
          cow_bridge_101cd900(g, COW_IMG(COW_ADDR_LIFT_101D3AEB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
          cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_101D3AF1), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, 0u, 4u);
          wr32((uint32_t)piVar1, 0);
        }
      }
      if (rd32((uint32_t)piVar1) == 0) {
        iVar5 = cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_101D3B09), 1u, (const CowU32[]){ 244u }, g->ecx, g->edx, 0u, 4u);
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = cow_bridge_101cd3b0(g, COW_IMG(COW_ADDR_LIFT_101D3B27), 4u, (const CowU32[]){ param_2, param_3, param_4, param_5 }, g->ecx, g->edx, 0u, 0u);
        }
        wr32((uint32_t)piVar1, iVar5);
      }
      iVar5 = cow_bridge_100eb490(g, COW_IMG(COW_ADDR_LIFT_101D3B38), 2u, (const CowU32[]){ param_4, param_3 }, g->ecx, g->edx, 0u, 0u);
      if ((rd8((uint32_t)(iVar5 + 0x11)) & 0x40) != 0) {
        cow_bridge_101d5e50(g, COW_IMG(COW_ADDR_LIFT_101D3B4D), 1u, (const CowU32[]){ rd32((uint32_t)piVar1) }, g->ecx, g->edx, 0u, 0u);
      }
      cow_bridge_101d4ba0(g, COW_IMG(COW_ADDR_LIFT_101D3B55), 1u, (const CowU32[]){ iVar5 }, g->ecx, g->edx, 0u, 0u);
      if (bVar2) {
        uVar4 = cow_bridge_101cd990(g, COW_IMG(COW_ADDR_LIFT_101D3B64), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        wr16((uint32_t)(param_1 + 0x7e6), uVar4);
      }
      if (local_4 != 0) {
        cow_bridge_101ce1e0(g, COW_IMG(COW_ADDR_LIFT_101D3B7D), 2u, (const CowU32[]){ local_4, 0 }, g->ecx, g->edx, 0u, 0u);
      }
      g->eax = (CowU32)(rd32((uint32_t)piVar1)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d3a70(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x101d3a70: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d3a71: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x101d3a72: register ebx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101d3a76: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* push ebp (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->esi); /* push esi (from the epilogue's pops) */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_101d3a70(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
