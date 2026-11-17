/* f_0x10204770 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   If the menu-raid status byte is 0x0F, calls the menu handler; otherwise walks the raid table, * updates each record and finally posts the completion notice.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10204770(Guest* g, uint32_t self, uint32_t sp0)
{
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_ebp = g->ebp;

    /* 10204770: mov al, byte ptr [0x106643a2] */
    g->eax = (g->eax & 0xFFFFFF00u) | (uint32_t)rd8(COW_IMG(0x106643A2u));

    /* 10204775: sub esp, 8 */
    g->esp = sp0 - 8u;

    /* 10204778: cmp al, 0xf */
    if (((uint8_t)g->eax) == 0x0Fu)
    {
        /* 1020477a: push edi */
        g->esp -= 4u;
        wr32(g->esp, saved_edi);

        /* 1020477b: mov edi, ecx */
        g->edi = self;

        /*
         * 1020477d: jne 0x10204793 -- not taken.
         *
         * 1020477f: push 0x10385424
         * 10204784: mov ecx, 0x10621838
         * 10204789: call 0x1015e910
         *
         * Keep the stack exactly where the original is when the call is made.
         */
        cow_thiscall(g, COW_IMG(0x1015E910u), COW_IMG(0x10621838u), 1u,
                     COW_IMG(0x10385424u));

        /* 1020478e: pop edi */
        g->edi = rd32(g->esp);
        g->esp += 4u;

        /* 1020478f: add esp, 8 */
        g->esp = sp0;

        g->ebx = saved_ebx;
        g->esi = saved_esi;
        g->ebp = saved_ebp;

        /* 10204792: ret */
        return g->eax;
    }

    /* 1020477d: jne 0x10204793 */
    g->edi = self;

    uint32_t counter = 1u;
    uint32_t record = COW_IMG(0x106640A8u);

    while ((int32_t)record < (int32_t)COW_IMG(0x10664315u))
    {
        if (rd8(record + 0x7Au) == 0u)
        {
            /* The original leaves esp at the function-local frame here. */
            g->esp = sp0 - 12u;
            g->ecx = self;
            cow_thiscall(g, COW_IMG(0x10201F80u), self, 1u, counter);
        }
        else
        {
            /*
             * The original local buffer is [ebp - 8], i.e. below the caller's
             * return address.  cow_frame gives it the same guest address range.
             */
            const uint32_t buf = cow_frame(g, sp0, 8u);

            wr32(buf, 0u);
            wr32(buf + 4u, 0u);

            g->esp = sp0 - 12u;
            cow_cdecl(g, COW_IMG(0x10118900u), 4u, buf, counter, 1u, 1u);

            const uint32_t v0 = rd32(buf);
            const uint32_t v2 = rd32(buf + 2u);

            g->esp = sp0 - 12u;
            g->ecx = self;
            cow_thiscall(g, COW_IMG(0x10202720u), self, 4u,
                         2u, v0, v2, record);

            g->esp = sp0 - 12u;
            g->ecx = self;
            cow_thiscall(g, COW_IMG(0x10201F50u), self, 1u, counter);
        }

        record += 0x7Cu;
        counter += 1u;
    }

    g->esp = sp0 - 12u;
    g->ecx = self;
    cow_thiscall(g, COW_IMG(0x10202110u), self, 3u,
                 2u, 0xFFFFFFFFu, 0xFFFFFFFFu);

    g->edi = saved_edi;
    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->ebp = saved_ebp;

    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t result = cow_fn_10204770(g, self, sp0);

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
