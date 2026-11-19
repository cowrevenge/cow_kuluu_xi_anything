/* f_0x1000df80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   Searches an object's string list for a case-insensitive ASCII match and returns the * dword at offset +4 of the matching element, or 0 if none is found.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000df80(Guest* g, uint32_t self, uint32_t param2)
{
    const uint32_t count = rd32(self + 4u);

    if ((int32_t)count <= 0)
    {
        return 0u;
    }

    /*
     * Stack state after:
     *   push ebp
     *   mov  ebp, esp
     *   sub  esp, 8
     *   push ebx
     *   push esi
     *   push edi
     * is esp = sp0 - 24.
     *
     * The original loop does not restore the stack after each _alloca, so we
     * keep a local guest stack pointer and use it for all helper calls.
     */
    uint32_t local_esp = g->esp - 24u;
    uint32_t index = 0u;

    for (;;)
    {
        const uint32_t array = rd32(self);
        const uint32_t elem = rd32(array + index * 4u);
        const uint32_t ebx = rd32(elem);

        uint32_t esi = 0u;
        uint32_t edi = 0u;

        if (ebx != 0u)
        {
            /*
             * 1000dfb8: push ebx
             * 1000dfb9: call [0x1032913c]    ; lstrlenW, stdcall
             */
            g->esp = local_esp;
            const uint32_t len =
                cow_stdcall(g, rd32(COW_IMG(0x1032913cu)), 1u, ebx);
            local_esp = g->esp;

            /*
             * 1000dfbf: lea edi, [eax + eax + 2]
             * 1000dfc3: mov  eax, edi
             * 1000dfc5: add  eax, 3
             * 1000dfc8: and  al, 0xfc
             * 1000dfca: call 0x10312190       ; alloca, size in eax
             * 1000dfcf: mov  esi, esp
             */
            edi = len + len + 2u;
            const uint32_t alloc_size = (edi + 3u) & 0xFFFFFFFCu;

            g->esp = local_esp;
            g->eax = alloc_size;
            cow_cdecl(g, COW_IMG(0x10312190u), 0u);
            local_esp = g->esp;

            esi = local_esp;

            /*
             * 1000dfde: mov byte ptr [esi], 0
             *
             * 1000dfd1: push 0
             * 1000dfd3: push 0
             * 1000dfd5: push edi
             * 1000dfd6: push esi
             * 1000dfd7: push -1
             * 1000dfd9: push ebx
             * 1000dfda: push 0
             * 1000dfdc: push 0
             * 1000dfde: mov byte ptr [esi], 0
             * 1000dfe1: call [0x10329154]     ; WideCharToMultiByte, stdcall
             */
            wr8(esi, 0u);

            g->esp = local_esp;
            cow_stdcall(
                g,
                rd32(COW_IMG(0x10329154u)),
                8u,
                0u,
                0u,
                ebx,
                0xFFFFFFFFu,
                esi,
                edi,
                0u,
                0u
            );
            local_esp = g->esp;
        }

        /*
         * 1000dfea: mov edx, [ebp + 8]
         * 1000dfee: push edx
         * 1000dfef: push esi
         * 1000dff1: call [0x10329174]         ; lstrcmpiA, stdcall
         */
        g->esp = local_esp;
        const uint32_t cmp =
            cow_stdcall(g, rd32(COW_IMG(0x10329174u)), 2u, esi, param2);
        local_esp = g->esp;

        if (cmp == 0u)
        {
            const uint32_t array = rd32(self);
            const uint32_t elem = rd32(array + index * 4u);
            return rd32(elem + 4u);
        }

        ++index;

        /*
         * 1000dffc: inc edi
         * 1000e000: cmp edi, [eax + 4]
         * 1000e003: jl  loop_top
         */
        if ((int32_t)index >= (int32_t)count)
        {
            return 0u;
        }
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000df80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_1000df80(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
