/* f_0x102bf550 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102bf550(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1 + 0x71u) & 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd8(arg2 + 0x19u) != 3u)
        {
            edx = (in_edx & 0xffffff00u) | rd8(arg2 + 0x19u);
            goto L_102bf57d;
        }
        edx = (in_edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        t1 = rd16(arg1 + 0x11au);
        wr8(arg2 + 0x19u, (uint8_t)(((edx & 0xffffff00u) | t1 != 0u) * 4u + 2u));
        edx = ((edx & 0xffffff00u) | t1 != 0u) * 4u + 2u;
L_102bf593: ;
        wr8(arg2 + 0x18u, 8u);
L_102bf597: ;
        wr16(arg2 + 0x16u, 0u);
    }
    if ((rd8(arg1 + 0x70u) & 0x80u) != 0u)
    {
        wr8(arg2 + 0x19u, rd8(arg2 + 0x19u) & 0xfbu);
        wr16(arg2 + 0x16u, 0u);
        esi = arg1 + 0x138u;
        edi = arg2 + 0x5au;
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
        wr16(edi, rd16(esi)); esi += (g->df ? (uint32_t)-2 : 2u); edi += (g->df ? (uint32_t)-2 : 2u);
    }
    if ((rd8(arg1 + 0x71u) & 0x20u) != 0u)
    {
        t2 = rd32(arg1 + 0x15cu);
        wr32(arg2 + 0x28u, t2);
        t3 = rd32(arg1 + 0x234u);
        wr32(arg2 + 0xfcu, t3);
        edx = t3;
    }
    if ((rd8(arg1 + 0x71u) & 4u) != 0u)
    {
        if (rd8(arg2 + 0x18u) == 0x10u)
        {
            wr8(arg2 + 0x18u, 8u);
        }
    }
    if ((rd8(arg1 + 0x70u) & 0x40u) != 0u)
    {
        if (rd8(arg2 + 0x19u) == 2u)
        {
            edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
            goto L_102bf5fa;
        }
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        if ((uint8_t)edx != 6u) goto L_102bf60d;
L_102bf5fa: ;
        if (rd32(arg1 + 0x1ecu) != 0u)
        {
            if (rd8(arg2 + 0x18u) == 8u)
            {
                wr8(arg2 + 0x19u, 3u);
            }
        }
    }
L_102bf60d: ;
    if ((rd8(arg1 + 0x70u) & 4u) != 0u)
    {
        if (rd8(arg2 + 0x18u) < 8u)
        {
            wr8(arg2 + 0x18u, 8u);
        }
    }
    if ((rd8(arg1 + 0x71u) & 0x40u) != 0u)
    {
        wr8(arg2 + 0x19u, rd8(arg2 + 0x19u) | 2u);
    }
    if ((rd8(arg1 + 0x72u) & 0x60u) != 0u)
    {
        wr8(arg2 + 0x19u, rd8(arg2 + 0x19u) & 0xfdu);
    }
    if (rd8(arg2 + 0x19u) == 3u)
    {
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        goto L_102bf644;
    }
    edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
    if ((edx & 2u) == 0u) goto L_102bf644;
    wr8(arg2 + 0x1du, 3u);
L_102bf648: ;
    if ((rd8(arg1 + 0x72u) & 4u) != 0u)
    {
        wr8(arg2 + 0x19u, edx & 0xfbu);
        edx = (edx & 0xffffff00u) | (edx & 0xfbu);
    }
    if ((rd8(arg2 + 0x19u) & 4u) == 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
    }
    else
    {
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
    }
    if ((rd8(arg1 + 0x71u) & 0x80u) != 0u)
    {
        if ((uint8_t)edx == 2u) goto L_102bf66e;
        if ((uint8_t)edx != 0u) goto L_102bf671;
L_102bf66e: ;
        wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
    }
L_102bf671: ;
    if ((rd8(arg1 + 0x72u) & 0x10u) == 0u)
    {
        eax = arg1;
        cf = 0u;
        of = 0u;
    }
    else
    {
        if (rd8(arg2 + 0x18u) < rd8(arg1 + 0x64u))
        {
            edx = (edx & 0xffffff00u) | rd8(arg1 + 0x64u);
            wr8(arg2 + 0x18u, (uint8_t)edx);
        }
        if (rd8(arg2 + 0x1du) >= rd8(arg1 + 0x65u))
        {
            eax = (arg1 & 0xffffff00u) | rd8(arg1 + 0x65u);
            cf = rd8(arg2 + 0x1du) < rd8(arg1 + 0x65u);
            of = ((rd8(arg2 + 0x1du) ^ rd8(arg1 + 0x65u)) & (rd8(arg2 + 0x1du) ^ (uint8_t)(rd8(arg2 + 0x1du) - rd8(arg1 + 0x65u)))) >> 7u;
        }
        else
        {
            eax = (arg1 & 0xffffff00u) | rd8(arg1 + 0x65u);
            cf = rd8(arg2 + 0x1du) < rd8(arg1 + 0x65u);
            of = ((rd8(arg2 + 0x1du) ^ rd8(arg1 + 0x65u)) & (rd8(arg2 + 0x1du) ^ (uint8_t)(rd8(arg2 + 0x1du) - rd8(arg1 + 0x65u)))) >> 7u;
            wr8(arg2 + 0x1du, (uint8_t)eax);
        }
    }
    t4 = rd8(arg2 + 0x18u);
    eax = (eax & 0xffffff00u) | t4;
    ecx = arg2;
    { /* imul byte ptr [ecx + 0x1d] */ uint32_t A = (uint32_t)(ecx + 0x1Du); { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)rd8(A); eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(ecx + 0x1eu, (uint8_t)eax);
    t5 = ((uint8_t)eax * rd32(ecx) + 7u) >> 3u;
    wr32(ecx + 0xcu, t5);
    return;
L_102bf57d: ;
    if (rd16(arg1 + 0x11au) != 0u)
    {
        wr8(arg2 + 0x19u, (uint8_t)(edx | 4u));
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 4u);
    }
    if (rd8(arg2 + 0x18u) >= 8u) goto L_102bf597;
    goto L_102bf593;
L_102bf644: ;
    wr8(arg2 + 0x1du, 1u);
    goto L_102bf648;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bf550(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102bf550(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
