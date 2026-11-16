/* f_0x101fa7c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101fa7c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(COW_IMG(0x106637a9u), 0u);
    eax = COW_IMG(0x106637e8u);
L_101fa7cd: ;
    wr32(eax - 4u, 0u);
    wr32(eax, 3u);
    wr32(eax + 4u, 0u);
    wr32(eax + 8u, 0u);
    if ((int32_t)(eax + 0x10u) < (int32_t)COW_IMG(0x10663888u))
    {
        eax = eax + 0x10u;
        goto L_101fa7cd;
    }
    eax = eax + 0x10u;
    if (arg1 == 0u)
    {
        edx = 0u;
    }
    else
    {
        wr8(COW_IMG(0x106637a9u), 1u);
        t1 = rd32(arg1);
        wr32(COW_IMG(0x106637e4u), (uint8_t)t1);
        t2 = rd8(arg1 + 1u);
        wr32(COW_IMG(0x106637f4u), t2);
        t3 = rd8(arg1 + 2u);
        wr32(COW_IMG(0x10663804u), t3);
        t4 = rd8(arg1 + 3u);
        wr32(COW_IMG(0x10663814u), t4);
        t5 = (uint8_t)rd32(arg1 + 4u);
        wr32(COW_IMG(0x10663824u), t5);
        t6 = rd8(arg1 + 5u);
        wr32(COW_IMG(0x10663834u), t6);
        t7 = rd8(arg1 + 6u);
        wr32(COW_IMG(0x10663844u), t7);
        t8 = rd8(arg1 + 7u);
        wr32(COW_IMG(0x10663854u), t8);
        t9 = (uint8_t)rd32(arg1 + 8u);
        wr32(COW_IMG(0x10663864u), t9);
        t10 = rd8(arg1 + 9u);
        wr32(COW_IMG(0x10663874u), t10);
        eax = COW_IMG(0x106637ecu);
        ecx = arg1 + 0xcu;
L_101fa878: ;
        t11 = rd32(ecx) & 3u;
        wr32(eax - 4u, t11);
        t12 = (uint32_t)((int32_t)(rd32(ecx) << 0xfu) >> 0x11u);
        wr32(eax, t12);
        t13 = (uint32_t)((int32_t)rd32(ecx) >> 0x11u);
        wr32(eax + 4u, t13);
        if ((int32_t)(eax + 0x10u) < (int32_t)COW_IMG(0x1066388cu))
        {
            eax = eax + 0x10u;
            ecx = ecx + 4u;
            goto L_101fa878;
        }
        eax = eax + 0x10u;
        edx = t13;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fa7c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fa7c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
