/* f_0x100e6df0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100e6df0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

L_100e6df4: ;
    t1 = arg2 + rd32(sp0 + 4u) - (uint32_t)((int32_t)(arg2 + rd32(sp0 + 4u)) >> 0x1fu);
    eax = rd32(COW_IMG(0x104df770u));
    ebx = rd32(sp0 + 4u);
    esi = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16((uint32_t)((int32_t)t1 >> 1u) * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u) * 0x100u + 0xa90u;
    edi = arg2;
L_100e6e24: ;
    if ((int32_t)rd32(eax + 0x3ccu) >= 0)
    {
        ecx = (uint32_t)(int16_t)rd16(eax + ebx * 2u + 0x832u);
        ebp = ebx * 2u + 0x832u;
        t19 = eax + ecx * 0x100u + 0xa90u;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t20 = cow_thiscall_cdecl(g, rd32(eax + 0x3d0u), ecx << 8u, 1, t19);
        if ((int32_t)t20 <= 0) goto L_100e6f12;
L_100e6eec: ;
        t21 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(ebp + rd32(COW_IMG(0x104df770u)) + 2u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        t22 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 0x10u;
        t23 = cow_thiscall_cdecl(g, rd32(t22 + 0x3d0u), (uint32_t)(int16_t)rd16(ebp + t22 + 2u) << 8u, 2, t21, esi);
        if ((int32_t)t23 > 0)
        {
            ebx = ebx + 1u;
            ebp = ebp + 2u;
            goto L_100e6eec;
        }
        ebx = ebx + 1u;
L_100e6f12: ;
        t24 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        g->edx = t24;
        t25 = rd32(COW_IMG(0x104df770u));
        t26 = rd16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u);
        g->esp = sp0 - 0x10u;
        t27 = cow_thiscall_cdecl(g, rd32(t25 + 0x3d0u), (uint32_t)(int16_t)t26 << 8u, 2, esi, t24);
        t28 = g->ecx;
        t29 = g->edx;
        if ((int32_t)t27 <= 0)
        {
            ecx = t28;
            edx = t29;
            goto L_100e6f61;
        }
        ebp = edi * 2u + 0x832u;
L_100e6f3b: ;
        t30 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(ebp + rd32(COW_IMG(0x104df770u)) - 2u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        g->edx = t30;
        t31 = rd32(COW_IMG(0x104df770u));
        t32 = rd16(ebp + rd32(COW_IMG(0x104df770u)) - 2u);
        g->esp = sp0 - 0x10u;
        t33 = cow_thiscall_cdecl(g, rd32(t31 + 0x3d0u), (uint32_t)(int16_t)t32 << 8u, 2, esi, t30);
        t34 = g->ecx;
        t35 = g->edx;
        if ((int32_t)t33 > 0)
        {
            ebp = ebp - 2u;
            edi = edi - 1u;
            goto L_100e6f3b;
        }
        ecx = t34;
        edx = t35;
        edi = edi - 1u;
    }
    else
    {
        ecx = (uint32_t)(int16_t)rd16(eax + ebx * 2u + 0x832u);
        ebp = ebx * 2u + 0x832u;
        t2 = eax + ecx * 0x100u + 0xa90u;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t3 = cow_thiscall_cdecl(g, rd32(eax + 0x3d0u), ecx << 8u, 1, t2);
        if ((int32_t)t3 >= 0) goto L_100e6e7c;
L_100e6e56: ;
        t4 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(ebp + rd32(COW_IMG(0x104df770u)) + 2u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        t5 = rd32(COW_IMG(0x104df770u));
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall_cdecl(g, rd32(t5 + 0x3d0u), (uint32_t)(int16_t)rd16(ebp + t5 + 2u) << 8u, 2, t4, esi);
        if ((int32_t)t6 < 0)
        {
            ebx = ebx + 1u;
            ebp = ebp + 2u;
            goto L_100e6e56;
        }
        ebx = ebx + 1u;
L_100e6e7c: ;
        t7 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        g->edx = t7;
        t8 = rd32(COW_IMG(0x104df770u));
        t9 = rd16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u);
        g->esp = sp0 - 0x10u;
        t10 = cow_thiscall_cdecl(g, rd32(t8 + 0x3d0u), (uint32_t)(int16_t)t9 << 8u, 2, esi, t7);
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)t10 >= 0)
        {
            ecx = t11;
            edx = t12;
            goto L_100e6f61;
        }
        ebp = edi * 2u + 0x832u;
L_100e6ea9: ;
        t13 = rd32(COW_IMG(0x104df770u)) + (uint32_t)(int16_t)rd16(ebp + rd32(COW_IMG(0x104df770u)) - 2u) * 0x100u + 0xa90u;
        g->eax = rd32(COW_IMG(0x104df770u));
        g->edx = t13;
        t14 = rd32(COW_IMG(0x104df770u));
        t15 = rd16(ebp + rd32(COW_IMG(0x104df770u)) - 2u);
        g->esp = sp0 - 0x10u;
        t16 = cow_thiscall_cdecl(g, rd32(t14 + 0x3d0u), (uint32_t)(int16_t)t15 << 8u, 2, esi, t13);
        t17 = g->ecx;
        t18 = g->edx;
        if ((int32_t)t16 < 0)
        {
            ebp = ebp - 2u;
            edi = edi - 1u;
            goto L_100e6ea9;
        }
        ecx = t17;
        edx = t18;
        edi = edi - 1u;
    }
L_100e6f61: ;
    if ((int32_t)ebx > (int32_t)edi) goto L_100e6f99;
    t36 = rd16(ebx * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u);
    t37 = rd16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u);
    wr16(ebx * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u, (uint16_t)t37);
    wr16(edi * 2u + rd32(COW_IMG(0x104df770u)) + 0x832u, (uint16_t)t36);
    if ((int32_t)(ebx + 1u) <= (int32_t)(edi - 1u))
    {
        ebx = ebx + 1u;
        edi = edi - 1u;
        goto L_100e6e1f;
    }
    ecx = (ecx & 0xffff0000u) | t36;
    edx = (edx & 0xffff0000u) | t37;
    ebx = ebx + 1u;
    edi = edi - 1u;
L_100e6f99: ;
    if ((int32_t)rd32(sp0 + 4u) >= (int32_t)edi)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t38 = cow_cdecl(g, COW_IMG(0x100e6df0u), 2, eax, edi);
        eax = t38;
    }
    if ((int32_t)arg2 <= (int32_t)ebx) goto L_100e6fba;
    wr32(sp0 + 4u, ebx);
    goto L_100e6df4;
L_100e6e1f: ;
    eax = rd32(COW_IMG(0x104df770u));
    goto L_100e6e24;
L_100e6fba: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e6df0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e6df0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
