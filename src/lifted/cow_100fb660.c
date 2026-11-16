/* f_0x100fb660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100fb660(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd16(arg1 + 0x30u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0x14u, t1);
    t3 = g->edx;
    t4 = rd16(arg1 + 0x30u);
    g->ecx = t4;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    t5 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 5u, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        ecx = t6;
        ebx = t2;
        t20 = rd32(arg1 + 0x30u);
        edx = t20;
        loc_10 = t20;
        loc_14 = COW_IMG(0x10362344u);
    }
    else
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = t2;
        edi = t5;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5eu);
        t9 = g->ecx;
        t10 = g->edx;
        if (rd8(t8) == 0u)
        {
            eax = t8;
            ecx = (t9 & 0xffffff00u) | rd8(t8);
            edx = t10;
        }
        else
        {
            eax = t8;
            ecx = (t9 & 0xffffff00u) | rd8(t8);
            edx = t10;
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            t11 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x5eu);
            t12 = g->ecx;
            t13 = g->edx;
            g->ebx = ebx;
            g->ecx = t12;
            g->edx = t13;
            g->esp = sp0 - 0xcu;
            t14 = cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, t11, ebx);
            t15 = g->ecx;
            t16 = g->edx;
            eax = t14;
            ecx = t15;
            edx = t16;
        }
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t17 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x62u);
        t18 = g->ecx;
        t19 = g->edx;
        ecx = t18;
        edx = t19;
        loc_10 = edi;
        loc_14 = t17;
    }
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x100d9b20u), 7, 0x29u, 0u, 0u, 0u, 0u, loc_14, loc_10);
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fb660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100fb660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
