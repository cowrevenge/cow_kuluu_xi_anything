/* f_0x10004dd0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Builds a path string in a 260-byte local buffer, appends fixed fields, copies the argument string into it, then copies the result back to the argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10004dd0(Guest* g, uint32_t sp0, uint32_t param)
{
    const uint32_t buf = cow_frame(g, sp0, 0x104u);

    uint32_t obj = rd32(COW_IMG(0x103d3cb8u));
    if (rd32(obj + 0x20u) == 1u)
    {
        cow_stdcall(g, rd32(COW_IMG(0x10329118u)), 2u, 0x104u, buf);
    }
    else
    {
        uint32_t i = 0u;
        for (;;)
        {
            uint8_t c = rd8(COW_IMG(0x1034f8ecu) + i);
            wr8(buf + i, c);
            ++i;
            if (c == 0u)
                break;
        }
    }

    /* repne scasb al=0 over buf: find terminator, leave edi after it. */
    uint32_t edi = buf;
    uint32_t ecx = 0xFFFFFFFFu;
    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        --ecx;
        ++edi;
        if (b == 0u)
            break;
    }

    uint32_t edx = rd32(COW_IMG(0x1034f8e4u));
    uint8_t al = rd8(COW_IMG(0x1034f8e8u));

    --edi;                         /* edi points at the terminator */
    wr32(edi, edx);                /* write 4 bytes at the terminator */
    wr8(edi + 4u, al);             /* write one more byte */

    /* repne scasb al=0 over buf again: find the new terminator. */
    edi = buf;
    ecx = 0xFFFFFFFFu;
    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        --ecx;
        ++edi;
        if (b == 0u)
            break;
    }

    uint16_t cx = rd16(COW_IMG(0x1034f8e0u));
    wr16(edi - 1u, cx);            /* write 2 bytes at the new terminator */

    /* repne scasb al=0 over param: length including terminator. */
    edi = param;
    ecx = 0xFFFFFFFFu;
    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        --ecx;
        ++edi;
        if (b == 0u)
            break;
    }

    ecx = ~ecx;                    /* param length including terminator */
    edi -= ecx;                    /* edi = param */
    uint32_t esi = edi;
    uint32_t ebp = ecx;

    /* repne scasb al=0 over buf: find current terminator. */
    edi = buf;
    ecx = 0xFFFFFFFFu;
    while (ecx != 0u)
    {
        uint8_t b = rd8(edi);
        --ecx;
        ++edi;
        if (b == 0u)
            break;
    }

    ecx = ebp;
    --edi;                         /* destination for param copy is buf terminator */

    uint32_t n = ecx >> 2;
    while (n != 0u)
    {
        wr32(edi, rd32(esi));
        edi += 4u;
        esi += 4u;
        --n;
    }

    n = ecx & 3u;
    while (n != 0u)
    {
        wr8(edi, rd8(esi));
        ++edi;
        ++esi;
        --n;
    }

    /* Final copy: buf string to param. */
    uint32_t eax = buf;
    edx = param - buf;             /* from sub edx, ecx where ecx = buf */
    for (;;)
    {
        uint8_t c = rd8(eax);
        wr8(edx + eax, c);
        ++eax;
        if (c == 0u)
            break;
    }
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10004dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);
    cow_fn_10004dd0(g, sp0, param);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
