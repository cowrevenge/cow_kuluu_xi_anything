/* f_0x10252500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10252500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t21;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u) goto L_102525a0;
    if ((rd32(arg1) & 4u) == 0u) goto L_102525a0;
    eax = rd32(arg1);
    wr32(arg1 + 8u, 0xffffffffu);
    t1 = (eax & 0xffffff00u) | (eax & 0xf1u);
    wr32(arg1, t1);
    t2 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    if (t2 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = t2;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd32(arg1 + 0x18u);
        g->eax = t5;
        g->ecx = t3;
        g->edx = t4;
        t6 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t5, COW_IMG(0x10389a74u), 0xa9u);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(arg1 + 0x18u, t6);
        ecx = t7;
        edx = t8;
    }
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t9 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t10 = g->edx;
        t11 = rd32(arg1 + 0x1cu);
        g->edx = t10;
        t12 = cow_cdecl(g, COW_IMG(0x10276110u), 3, t11, COW_IMG(0x10389a74u), 0xaeu);
        t13 = g->edx;
        wr32(arg1 + 0x1cu, t12);
        edx = t13;
    }
    if (rd32(arg1 + 0x20u) == 0u) goto L_1025261c;
    ecx = rd32(arg1 + 0x20u);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10277ad0u), 1, arg1 + 0x20u);
    return 0u;
L_102525a0: ;
    if (rd32(arg1 + 0x18u) != 0u)
    {
        eax = rd32(arg1 + 0x18u);
        goto L_102525b1;
    }
    eax = rd32(arg1 + 0x18u);
    if (rd32(arg1 + 0x1cu) != 0u) goto L_102525b1;
    if (rd32(arg1 + 0x20u) == 0u) goto L_1025261c;
L_102525b1: ;
    t14 = rd32(arg1);
    wr32(arg1 + 8u, 0xffffffffu);
    wr32(arg1, t14 & 0xfffffffdu);
    wr32(arg1 + 0xcu, 0u);
    wr32(arg1 + 0x10u, 0u);
    wr32(arg1 + 0x14u, 0u);
    if (eax == 0u)
    {
        ecx = self;
        edx = t14 & 0xfffffffdu;
    }
    else
    {
        edx = t14 & 0xfffffffdu;
        g->eax = eax;
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t15 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389a74u), 0xc1u);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(arg1 + 0x18u, t15);
        ecx = t16;
        edx = t17;
    }
    if (rd32(arg1 + 0x1cu) != 0u)
    {
        eax = rd32(arg1 + 0x1cu);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t18 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389a74u), 0xc5u);
        t19 = g->ecx;
        t20 = g->edx;
        wr32(arg1 + 0x1cu, t18);
        ecx = t19;
        edx = t20;
    }
    if (rd32(arg1 + 0x20u) != 0u)
    {
        eax = rd32(arg1 + 0x20u);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t21 = cow_cdecl(g, COW_IMG(0x10276110u), 3, eax, COW_IMG(0x10389a74u), 0xc9u);
        wr32(arg1 + 0x20u, t21);
    }
L_1025261c: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10252500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10252500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
