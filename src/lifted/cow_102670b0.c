/* f_0x102670b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   adjusts two stack slots, calls a helper, and on non-negative result performs two indirect calls, returning the first indirect call's result.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_102670b0(Guest* g, uint32_t sp0)
{
    uint32_t esp = sp0;
    uint32_t eax, ecx, edx, esi, edi;

    /* 102670b0: mov ecx, dword ptr [esp + 4] */
    ecx = rd32(esp + 4u);

    /* 102670b4: mov dword ptr [esp + 8], 0x1033eeb8 */
    wr32(esp + 8u, COW_IMG(0x1033eeb8u));

    /* 102670bc: add ecx, 0x10 */
    ecx += 0x10u;

    /* 102670bf: mov dword ptr [esp + 4], ecx */
    wr32(esp + 4u, ecx);

    /* 10266cd0: mov ecx, dword ptr [esp + 0x14] */
    ecx = rd32(esp + 0x14u);

    /* 10266cd4: mov edx, dword ptr [esp + 8] */
    edx = rd32(esp + 8u);

    /* 10266cd8: lea eax, [esp + 0x14] */
    eax = esp + 0x14u;

    /* 10266cdc: push eax */
    esp -= 4u;
    wr32(esp, eax);

    /* 10266cdd: mov eax, dword ptr [esp + 8] */
    eax = rd32(esp + 8u);

    /* 10266ce1: push ecx */
    esp -= 4u;
    wr32(esp, ecx);

    /* 10266ce2: push 0 */
    esp -= 4u;
    wr32(esp, 0u);

    /* 10266ce4: push edx */
    esp -= 4u;
    wr32(esp, edx);

    /* 10266ce5: push eax */
    esp -= 4u;
    wr32(esp, eax);

    /* 10266ce6: call 0x10266bc0 */
    eax = cow_stdcall(g, COW_IMG(0x10266bc0u), 5u,
                      eax,
                      edx,
                      0u,
                      ecx,
                      esp + 4u);

    /* 10266ceb: test eax, eax / 10266ced: jl 0x10266d16 */
    if ((int32_t)eax < 0)
    {
        g->edx = edx;
        return eax;
    }

    /* 10266cef: mov edx, dword ptr [esp + 0x18] */
    edx = rd32(esp + 0x18u);

    /* 10266cf3: mov eax, dword ptr [esp + 0x10] */
    eax = rd32(esp + 0x10u);

    /* 10266cf7: push esi */
    esp -= 4u;
    wr32(esp, g->esi);

    /* 10266cf8: mov esi, dword ptr [esp + 0x18] */
    esi = rd32(esp + 0x18u);

    /* 10266cfc: push edi */
    esp -= 4u;
    wr32(esp, g->edi);

    /* 10266cfd: push edx */
    esp -= 4u;
    wr32(esp, edx);

    /* 10266cfe: mov edx, dword ptr [esp + 0x18] */
    edx = rd32(esp + 0x18u);

    /* 10266d02: mov ecx, dword ptr [esi] */
    ecx = rd32(esi);

    /* 10266d04: push eax */
    esp -= 4u;
    wr32(esp, eax);

    /* 10266d05: push edx */
    esp -= 4u;
    wr32(esp, edx);

    /* 10266d06: push esi */
    esp -= 4u;
    wr32(esp, esi);

    /* 10266d07: call dword ptr [ecx + 0x28] */
    eax = cow_stdcall(g, rd32(ecx + 0x28u), 4u,
                      esi,
                      edx,
                      eax,
                      edx);

    /* 10266d0a: mov edi, eax */
    edi = eax;

    /* 10266d0c: mov eax, dword ptr [esi] */
    eax = rd32(esi);

    /* 10266d0e: push esi */
    esp -= 4u;
    wr32(esp, esi);

    /* 10266d0f: call dword ptr [eax + 8] */
    cow_stdcall(g, rd32(eax + 8u), 1u, esi);

    /* 10266d12: mov eax, edi */
    eax = edi;

    /* 10266d14: pop edi */
    edi = rd32(esp);
    esp += 4u;

    /* 10266d15: pop esi */
    esi = rd32(esp);
    esp += 4u;

    /* 10266d16: ret 0x18 */
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102670b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_102670b0(g, sp0);
    g->esp = sp0;
    rt_return(g, result, 24u);
}
/* COW_ADAPTER END */
