/* f_0x1028f610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_1028f610(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg1 + 0x24u) + rd32(sp0 + 8u) * 0xcu;
    t2 = rd32(arg1 + 0x24u);
    t3 = rd32(rd32(arg1 + 0x24u) + rd32(sp0 + 8u) * 0xcu);
    t4 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, t1);
    if (arg3 == 0u)
    {
        eax = rd32(t3 + 0x30u);
        edx = t2;
        ebx = t3;
        ebp = t4;
        goto L_1028f690;
    }
    eax = rd32(t3 + 0x30u);
    edx = t2;
    ebx = t3;
    ebp = t4;
    if (eax == 0u) goto L_1028f647;
    esi = 0u;
    edi = 1u;
L_1028f64e: ;
    g->eax = eax;
    g->ecx = eax == 0u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10283280u), 2, 0u, eax == 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->ecx = t6;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x1026e3f0u), 1, ebx);
    t8 = g->ecx;
    t9 = rd32(rd32(sp0 + 8u) + 4u);
    g->eax = t9;
    g->edx = rd32(sp0 + 8u);
    t10 = rd32(sp0 + 8u);
    g->esp = sp0 - 0x1cu;
    t11 = cow_cdecl(g, COW_IMG(0x10283dc0u), 1, t9);
    t12 = g->edx;
    t13 = rd32(ebx + 0x24u);
    g->ecx = t13;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10283e00u), 1, t13);
    t14 = g->ecx;
    if (rd8(ebp + rd32(arg1 + 0x28u)) == 0u)
    {
        eax = rd32(arg1 + 0x28u);
        ecx = t14;
        loc_14 = 0u;
    }
    else
    {
        eax = rd32(arg1 + 0x28u);
        ecx = t14;
        loc_14 = 1u;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x10283320u), 1, loc_14);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)edi >= 4)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_1028f6c2;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
L_1028f6aa: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t18 = cow_cdecl(g, COW_IMG(0x10283280u), 2, edi, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    g->ecx = t19;
    g->edx = t20;
    g->esp = sp0 - 0x18u;
    t21 = cow_cdecl(g, COW_IMG(0x10283320u), 1, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if ((int32_t)(edi + 1u) < 4)
    {
        eax = t21;
        ecx = t22;
        edx = t23;
        edi = edi + 1u;
        goto L_1028f6aa;
    }
    eax = t21;
    ecx = t22;
    edx = t23;
L_1028f6c2: ;
    if ((int32_t)esi >= 4) goto L_1028f6df;
L_1028f6c7: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t24 = cow_cdecl(g, COW_IMG(0x10283280u), 2, esi, 1u);
    t25 = g->ecx;
    t26 = g->edx;
    g->ecx = t25;
    g->edx = t26;
    g->esp = sp0 - 0x18u;
    t27 = cow_cdecl(g, COW_IMG(0x10283320u), 1, 0u);
    t28 = g->ecx;
    t29 = g->edx;
    if ((int32_t)(esi + 1u) < 4)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        esi = esi + 1u;
        goto L_1028f6c7;
    }
    eax = t27;
    edx = t29;
L_1028f6df: ;
    t30 = rd32(ebx + 0x30u) == 0u;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10283280u), 2, 0u, t30);
    return;
L_1028f647: ;
L_1028f649: ;
    esi = 1u;
    edi = 0u;
    goto L_1028f64e;
L_1028f690: ;
    if (eax == 0u) goto L_1028f649;
    esi = 0u;
    edi = 1u;
    goto L_1028f64e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028f610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1028f610(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
