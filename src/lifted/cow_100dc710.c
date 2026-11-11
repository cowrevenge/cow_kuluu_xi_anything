/* f_0x100dc710 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100dc710 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100dc710(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 puVar5;
    CowU32 uVar6;
    int iVar7;
    int iVar8;
    int local_4;
    puVar1 = param_1;
      puVar2 = COW_IMG(COW_ADDR_LIFT_10360388);
      puVar5 = param_1 + 0x12;
      do {
        iVar7 = 0x100;
        do {
          uVar6 = rd32((uint32_t)puVar2);
          puVar2 = puVar2 + 1;
          wr32((uint32_t)puVar5, uVar6);
          puVar5 = puVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      } while ((int)puVar2 < 0x10361388);
      iVar7 = 0;
      iVar8 = (int)COW_IMG(COW_ADDR_LIFT_10360340) - (int)param_1;
      local_4 = 0x12;
      puVar5 = param_1;
      do {
        uVar6 = 0;
        param_1 = (CowU32)0x4;
        do {
          uVar6 = uVar6 << 8 | (int)rd8((uint32_t)(iVar7 + param_3));
          iVar7 = iVar7 + 1;
          if (param_4 <= iVar7) {
            iVar7 = 0;
          }
          param_1 = (CowU32)((int)param_1 + -1);
        } while (param_1 != (CowU32)0x0);
        wr32((uint32_t)puVar5, rd32((uint32_t)(iVar8 + (int)puVar5)) ^ uVar6);
        local_4 = local_4 + -1;
        puVar5 = puVar5 + 1;
      } while (local_4 != 0);
      uVar6 = 0;
      uVar3 = 0;
      param_1 = (CowU32)0x0;
      do {
        iVar7 = 0;
        do {
          uVar4 = uVar3 ^ rd32((uint32_t)(puVar1 + 4u * (uint32_t)(iVar7)));
          uVar3 = (rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar4 >> 0x18) + 0x312))) & 1 ^ 0x20) +
                  (rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar4 >> 8 & 0xff) + 0x112))) & 1 ^ 0x20) +
                  rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar4 >> 0x10 & 0xff) + 0x212))) + rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar4 & 0xff) + 0x12))) ^ uVar6;
          iVar7 = iVar7 + 1;
          uVar6 = uVar4;
        } while (iVar7 < 0x10);
        uVar6 = rd32((uint32_t)(puVar1 + 4u * (uint32_t)(0x10))) ^ uVar3;
        uVar3 = uVar4 ^ rd32((uint32_t)(puVar1 + 4u * (uint32_t)(0x11)));
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)((int)param_1)), uVar3);
        wr32((uint32_t)(puVar1 + 4u * (uint32_t)((int)param_1 + 1)), uVar6);
        param_1 = (CowU32)((int)param_1 + 2);
      } while ((int)param_1 < 0x12);
      param_1 = puVar1 + 0x13;
      param_3 = 4;
      do {
        param_4 = 0x80;
        do {
          iVar7 = 0;
          uVar4 = uVar3;
          do {
            uVar3 = uVar4 ^ rd32((uint32_t)(puVar1 + 4u * (uint32_t)(iVar7)));
            uVar4 = (rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar3 >> 0x18) + 0x312))) & 1 ^ 0x20) +
                    (rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar3 >> 8 & 0xff) + 0x112))) & 1 ^ 0x20) +
                    rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar3 >> 0x10 & 0xff) + 0x212))) + rd32((uint32_t)(puVar1 + 4u * (uint32_t)((uVar3 & 0xff) + 0x12))) ^ uVar6;
            iVar7 = iVar7 + 1;
            uVar6 = uVar3;
          } while (iVar7 < 0x10);
          uVar3 = uVar3 ^ rd32((uint32_t)(puVar1 + 4u * (uint32_t)(0x11)));
          uVar6 = rd32((uint32_t)(puVar1 + 4u * (uint32_t)(0x10))) ^ uVar4;
          wr32((uint32_t)(param_1 + 4u * (uint32_t)(-1)), uVar3);
          wr32((uint32_t)param_1, uVar6);
          param_1 = param_1 + 2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      g->eax = (CowU32)(uVar3 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100dc710(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100dc710: push ecx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100dc711: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100dc715: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100dc716: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100dc717: push esi */
    g->eax = COW_IMG(COW_ADDR_LIFT_10360388);   /* 0x100dc718: the value the entry loaded and the decompiler dropped */
    { g->edx = (uint32_t)((uint32_t)(g->ecx + 0x48u)); }   /* 0x100dc71d: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100dc720: push edi */
    cow_lift_100dc710(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
