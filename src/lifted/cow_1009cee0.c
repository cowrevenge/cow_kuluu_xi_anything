/* f_0x1009cee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1009cee0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = (self & 0xffff0000u) | rd16(arg3 + 4u);
    if ((t1 & 0x3fu) == 2u)
    {
        eax = (t1 & 0x3fu) - 2u;
        ecx = t1;
        goto L_1009cfcc;
    }
    eax = (t1 & 0x3fu) - 2u;
    ecx = t1;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1009cf28;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1009d0c6;
    }
    eax = eax - 1u;
    if ((ecx & 0xffc0u) < 0x600u)
    {
        edx = in_edx;
        goto L_1009d0c6;
    }
    esi = arg3 + 4u;
    edi = COW_IMG(0x10482f28u);
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    return (eax & 0xffffff00u) | 1u;
L_1009cf28: ;
    if ((ecx & 0xffc0u) < 0x500u)
    {
        edx = in_edx;
        goto L_1009d0c6;
    }
    if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 6u) * 4u) == 0u)
    {
        edx = in_edx;
        goto L_1009d0c6;
    }
    ecx = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 6u) * 4u);
    if (rd32(ecx + 0x78u) != rd32(arg3 + 8u))
    {
        eax = rd32(arg3 + 8u);
        edx = rd32(ecx + 0x78u);
        goto L_1009d0c6;
    }
    eax = rd32(arg3 + 8u);
    edx = rd32(ecx + 0x78u);
    wr16(ecx + 0x2a4u, rd16(arg3 + 0xcu));
    wr8(ecx + 0x200u, rd8(arg3 + 0x13u) & 0xfu);
    wr8(ecx + 0x201u, rd32(arg3 + 0x10u) >> 0x1cu);
    wr8(ecx + 0x1dau, rd32(arg3 + 0x10u) >> 1u & 1u);
    t2 = rd32(ecx + 0x130u);
    t3 = t2 ^ ((rd32(arg3 + 0x10u) >> 2u << 0x16u ^ t2) & 0x400000u);
    wr32(ecx + 0x130u, t3);
    if (rd8(arg3 + 0x14u) <= 0x20u)
    {
        eax = arg3 + 0x14u;
        edx = t2;
        goto L_1009d0c6;
    }
    edx = t2;
    g->eax = arg3 + 0x14u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10093430u), ecx, 1, arg3 + 0x14u);
    t5 = g->edx;
    g->edx = t5;
    return t4 & 0xffffff00u;
L_1009cfcc: ;
    if ((ecx & 0xffc0u) < 0x900u)
    {
        edx = in_edx;
    }
    else
    {
        if (rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 6u) * 4u) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            edi = rd32(COW_IMG(0x10480af0u) + rd16(arg3 + 6u) * 4u);
            if (rd32(edi + 0x78u) != rd32(arg3 + 8u))
            {
                eax = rd32(arg3 + 8u);
                edx = rd32(edi + 0x78u);
            }
            else
            {
                eax = rd32(arg3 + 8u);
                wr16(edi + 0x2a0u, rd16(arg3 + 0xcu));
                t6 = rd32(arg3 + 0x14u);
                wr32(edi + 0x29cu, t6);
                wr8(edi + 0x200u, rd32(arg3 + 0x10u) >> 0x15u & 0xfu);
                wr8(edi + 0x201u, rd32(arg3 + 0x10u) >> 0x19u & 0xfu);
                wr8(edi + 0x1dau, rd32(arg3 + 0x10u) >> 1u & 1u);
                if ((uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au)) != rd16(arg3 + 6u))
                {
                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                }
                else
                {
                    eax = rd16(arg3 + 6u);
                    edx = (uint32_t)(int16_t)rd16(COW_IMG(0x10485f7au));
                    g->eax = eax;
                    t7 = rd32(COW_IMG(0x10480af0u) + eax * 4u);
                    g->esp = sp0 - 0xcu;
                    t8 = cow_thiscall(g, COW_IMG(0x1009ab40u), t7, 1, arg3 + 0x18u);
                    t9 = g->ecx;
                    t10 = rd32(arg3 + 0x20u);
                    g->ecx = t9;
                    g->edx = t10;
                    t11 = cow_cdecl(g, COW_IMG(0x100f9620u), 2, arg1, t10);
                    t12 = g->ecx;
                    t13 = g->edx;
                    t14 = (t11 & 0xffffff00u) | rd8(arg3 + 0x24u);
                    g->eax = t14;
                    g->edx = t13;
                    g->esp = sp0 - 0x14u;
                    t15 = cow_thiscall_cdecl(g, COW_IMG(0x100f9740u), t12, 2, arg1, t14);
                    t16 = g->ecx;
                    t17 = g->edx;
                    t18 = (t16 & 0xffffff00u) | rd8(arg3 + 0x25u);
                    g->edx = t17;
                    g->esp = sp0 - 0x1cu;
                    t19 = cow_thiscall_cdecl(g, COW_IMG(0x100f98a0u), t18, 2, arg1, t18);
                    t20 = g->ecx;
                    t21 = g->edx;
                    t22 = (t21 & 0xffffff00u) | rd8(arg3 + 0x26u);
                    g->edx = t22;
                    g->esp = sp0 - 0x24u;
                    t23 = cow_thiscall_cdecl(g, COW_IMG(0x100f98e0u), t20, 2, arg1, t22);
                    t24 = g->ecx;
                    t25 = g->edx;
                    t26 = rd8(arg3 + 0x27u) & 1u;
                    g->edx = t25;
                    g->esp = sp0 - 0x2cu;
                    cow_thiscall_cdecl(g, COW_IMG(0x100f9780u), t24, 2, arg1, t26);
                    t27 = g->edx;
                    edx = t27;
                }
                t28 = rd32(edi + 0x130u);
                t29 = t28 ^ ((rd32(arg3 + 0x10u) >> 2u << 0x17u ^ t28) & 0x800000u);
                wr32(edi + 0x130u, t29);
                eax = t29;
            }
        }
    }
L_1009d0c6: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1009cee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1009cee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
