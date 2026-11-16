/* f_0x10128830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10128830(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    wr32(arg1, 0u);
    wr32(arg2, 0u);
    if (rd8(arg3) == 0u)
    {
        edx = in_edx;
        goto L_101288ef;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg3);
    ecx = self;
    edx = in_edx;
    ebx = arg3;
L_10128855: ;
    if ((uint8_t)eax != 0x7fu) goto L_101288aa;
    if ((uint32_t)(int8_t)rd8(ebx + 1u) + 5u > 0x3du)
    {
        eax = (uint32_t)(int8_t)rd8(ebx + 1u) + 5u;
        goto L_101288a7;
    }
    eax = (uint32_t)(int8_t)rd8(ebx + 1u) + 5u;
    t1 = rd32(COW_IMG(0x101288f4u) + rd8(COW_IMG(0x10128904u) + eax) * 4u);
    ecx = rd8(COW_IMG(0x10128904u) + eax);
    switch (t1 - RD)
    {
    case 0x10128874u: goto L_10128874;
    case 0x10128885u: goto L_10128885;
    case 0x10128896u: goto L_10128896;
    case 0x101288a7u: goto L_101288a7;
    default: rt_fatal(g, COW_IMG(0x1012886du), "switch");
    }
    return;
L_10128874: ;
    t6 = rd32(arg2) + 2u;
    wr32(arg2, t6);
    t7 = rd32(arg1) + 1u;
    wr32(arg1, t7);
    eax = t7;
    edx = t6;
    ebx = ebx + 2u;
L_101288e5: ;
    if (rd8(ebx) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx);
        goto L_10128855;
    }
L_101288ef: ;
    g->edx = edx;
    return;
L_10128885: ;
    t4 = rd32(arg2) + 3u;
    wr32(arg2, t4);
    t5 = rd32(arg1) + 1u;
    wr32(arg1, t5);
    eax = t5;
    edx = t4;
    ebx = ebx + 3u;
    goto L_101288e5;
L_10128896: ;
    t2 = rd32(arg2) + 4u;
    wr32(arg2, t2);
    t3 = rd32(arg1) + 1u;
    wr32(arg1, t3);
    eax = t3;
    edx = t2;
    ebx = ebx + 4u;
    goto L_101288e5;
L_101288a7: ;
    ebx = ebx + 1u;
    goto L_101288e5;
L_101288aa: ;
    if ((uint8_t)eax != 0x1eu)
    {
        if ((uint8_t)eax != 0x1fu)
        {
            g->ecx = ecx;
            g->esp = sp0 - 0xcu;
            t12 = cow_cdecl(g, COW_IMG(0x1011da80u), 1, ebx);
            t13 = g->ecx;
            t14 = t12 + rd32(arg2);
            wr32(arg2, t14);
            eax = t12;
            ecx = t13;
            edx = t14;
            ebx = ebx + t12;
        }
        else
        {
            t10 = rd32(arg2) + 2u;
            wr32(arg2, t10);
            t11 = rd32(arg1) + 1u;
            wr32(arg1, t11);
            eax = t11;
            edx = t10;
            ebx = ebx + 2u;
        }
    }
    else
    {
        t8 = rd32(arg2) + 2u;
        wr32(arg2, t8);
        t9 = rd32(arg1) + 1u;
        wr32(arg1, t9);
        eax = t9;
        edx = t8;
        ebx = ebx + 2u;
    }
    goto L_101288e5;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10128830(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10128830(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
