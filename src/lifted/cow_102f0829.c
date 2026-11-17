/* f_0x102f0829 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102f0829(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t edx;
    unsigned of;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((rd8(arg1 + 0x61u) & 0x10u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd8(arg2 + 0x19u) != 3u)
        {
            edx = (in_edx & 0xffffff00u) | rd8(arg2 + 0x19u);
            goto L_102f0858;
        }
        edx = (in_edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        t1 = rd16(arg1 + 0x10au);
        wr8(arg2 + 0x19u, (uint8_t)(((edx & 0xffffff00u) | t1 != 0u) * 4u + 2u));
        edx = ((edx & 0xffffff00u) | t1 != 0u) * 4u + 2u;
L_102f086d: ;
        wr8(arg2 + 0x18u, 8u);
L_102f0871: ;
        wr16(arg2 + 0x16u, 0u);
    }
    if ((rd8(arg1 + 0x61u) & 0x20u) != 0u)
    {
        t2 = rd32(arg1 + 0x130u);
        wr32(arg2 + 0x28u, t2);
        edx = t2;
    }
    if ((rd8(arg1 + 0x61u) & 4u) != 0u)
    {
        if (rd8(arg2 + 0x18u) == 0x10u)
        {
            wr8(arg2 + 0x18u, 8u);
        }
    }
    if ((rd8(arg1 + 0x60u) & 0x40u) != 0u)
    {
        if (rd8(arg2 + 0x19u) == 2u)
        {
            edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
            goto L_102f08a7;
        }
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        if ((uint8_t)edx != 6u) goto L_102f08b9;
L_102f08a7: ;
        if (rd32(arg1 + 0x174u) != 0u)
        {
            if (rd8(arg2 + 0x18u) == 8u)
            {
                wr8(arg2 + 0x19u, 3u);
            }
        }
    }
L_102f08b9: ;
    if ((rd8(arg1 + 0x60u) & 4u) != 0u)
    {
        if (rd8(arg2 + 0x18u) < 8u)
        {
            wr8(arg2 + 0x18u, 8u);
        }
    }
    if (rd8(arg2 + 0x19u) == 3u)
    {
        edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
        goto L_102f08dc;
    }
    edx = (edx & 0xffffff00u) | rd8(arg2 + 0x19u);
    if ((edx & 2u) == 0u) goto L_102f08dc;
    wr8(arg2 + 0x1du, 3u);
L_102f08e0: ;
    if ((edx & 4u) != 0u)
    {
        wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
    }
    if ((rd8(arg1 + 0x61u) & 0x80u) == 0u)
    {
        cf = 0u;
        of = 0u;
    }
    else
    {
        if ((uint8_t)edx == 2u)
        {
            cf = (uint8_t)edx < 2u;
            goto L_102f08f7;
        }
        if ((uint8_t)edx != 0u)
        {
            cf = 0u;
            of = 0u;
            goto L_102f08fa;
        }
        cf = 0u;
L_102f08f7: ;
        wr8(arg2 + 0x1du, (uint8_t)(rd8(arg2 + 0x1du) + 1u));
        of = (uint8_t)(rd8(arg2 + 0x1du) + 1u) == 0x80u;
    }
L_102f08fa: ;
    t3 = rd8(arg2 + 0x18u);
    eax = (arg1 & 0xffffff00u) | t3;
    { /* imul byte ptr [ecx + 0x1d] */ uint32_t A = arg2 + 0x1du; { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)rd8(A); eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr8(arg2 + 0x1eu, (uint8_t)eax);
    t4 = ((uint8_t)eax * rd32(arg2) + 7u) >> 3u;
    wr32(arg2 + 0xcu, t4);
    g->edx = edx;
    return;
L_102f0858: ;
    if (rd16(arg1 + 0x10au) != 0u)
    {
        wr8(arg2 + 0x19u, (uint8_t)(edx | 4u));
        edx = (edx & 0xffffff00u) | (uint8_t)(edx | 4u);
    }
    if (rd8(arg2 + 0x18u) >= 8u) goto L_102f0871;
    goto L_102f086d;
L_102f08dc: ;
    wr8(arg2 + 0x1du, 1u);
    goto L_102f08e0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f0829(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f0829(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
