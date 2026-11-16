/* f_0x1028f510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1028f510(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
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
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(arg2 + 0x20u) <= 0)
    {
        eax = rd32(arg2 + 0x20u);
        ecx = self;
        edx = arg2;
        ebx = 0u;
        ebp = 0u;
        goto L_1028f5c8;
    }
    ebx = 0u;
    ebp = 0u;
    loc_4 = 0u;
    loc_8 = arg2 + 0x24u;
L_1028f535: ;
    if (rd8(rd32(loc_8) + rd32(arg1 + 0x28u)) != 0u)
    {
        esi = rd32(rd32(loc_8) * 0xcu + rd32(arg1 + 0x24u));
        edi = rd32(loc_8) * 0xcu + rd32(arg1 + 0x24u);
        if (rd32(esi + 0x30u) == 0u)
        {
            ecx = rd32(esi + 0x30u);
            eax = ebp;
            ebp = ebp + 1u;
        }
        else
        {
            ecx = rd32(esi + 0x30u);
            eax = ebx;
            ebx = ebx + 1u;
        }
        if ((int32_t)eax <= 3)
        {
            if ((int32_t)eax >= 0)
            {
                g->eax = eax;
                g->ecx = ecx;
                g->edx = ecx == 0u;
                g->esp = sp0 - 0x18u;
                t1 = cow_cdecl(g, COW_IMG(0x10283280u), 2, eax, ecx == 0u);
                t2 = g->ecx;
                t3 = g->edx;
                g->ecx = t2;
                g->edx = t3;
                g->esp = sp0 - 0x20u;
                cow_cdecl(g, COW_IMG(0x1026e3f0u), 1, esi);
                t4 = g->ecx;
                t5 = g->edx;
                t6 = rd32(edi + 4u);
                g->eax = t6;
                g->edx = t5;
                g->esp = sp0 - 0x24u;
                t7 = cow_cdecl(g, COW_IMG(0x10283dc0u), 1, t6);
                t8 = g->edx;
                t9 = rd32(esi + 0x24u);
                g->ecx = t9;
                g->edx = t8;
                g->esp = sp0 - 0x28u;
                t10 = cow_cdecl(g, COW_IMG(0x10283e00u), 1, t9);
                t11 = g->ecx;
                t12 = g->edx;
                g->esp = sp0 - 0x2cu;
                cow_cdecl(g, COW_IMG(0x10283320u), 1, 1u);
            }
        }
    }
    if ((int32_t)(loc_4 + 1u) < (int32_t)rd32(arg2 + 0x20u))
    {
        loc_4 = loc_4 + 1u;
        loc_8 = loc_8 + 4u;
        goto L_1028f535;
    }
    eax = loc_4 + 1u;
    ecx = rd32(arg2 + 0x20u);
    if ((int32_t)ebx >= 4)
    {
        edx = arg2;
        goto L_1028f5e0;
    }
    edx = arg2;
L_1028f5c8: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_cdecl(g, COW_IMG(0x10283280u), 2, ebx, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x18u;
    t16 = cow_cdecl(g, COW_IMG(0x10283320u), 1, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)(ebx + 1u) < 4)
    {
        eax = t16;
        ecx = t17;
        edx = t18;
        ebx = ebx + 1u;
        goto L_1028f5c8;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
L_1028f5e0: ;
    if ((int32_t)ebp >= 4) goto L_1028f5fd;
L_1028f5e5: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_cdecl(g, COW_IMG(0x10283280u), 2, ebp, 1u);
    t20 = g->ecx;
    t21 = g->edx;
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x18u;
    t22 = cow_cdecl(g, COW_IMG(0x10283320u), 1, 0u);
    t23 = g->ecx;
    t24 = g->edx;
    if ((int32_t)(ebp + 1u) < 4)
    {
        eax = t22;
        ecx = t23;
        edx = t24;
        ebp = ebp + 1u;
        goto L_1028f5e5;
    }
    eax = t22;
    edx = t24;
L_1028f5fd: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028f510(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
