/* f_0x100e9ee0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e9ee0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    const uint32_t self = g->ecx;

    t1 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    wr8(t1 + 0x9816u, rd8(t1 + 0x9816u) | 1u);
    t2 = rd32(sp0 + 0xcu) + 8u;
    t3 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, 0x14u);
    ecx = self;
    ebx = t3;
    esi = t2;
    loc_4 = t2;
L_100e9f18: ;
    if (rd32(esi) != 0u)
    {
        edx = rd32(esi);
        if (rd8(ebx + 4u) != 5u)
        {
            ecx = (ecx & 0xffffff00u) | rd8(ebx + 4u);
            ecx = (uint8_t)ecx;
        }
        else
        {
            ecx = 0u;
        }
        ebp = 0u;
        edi = (uint8_t)ecx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57d8u;
        ecx = rd32(COW_IMG(0x104dfd98u));
L_100e9f5a: ;
        if (rd32(edi + 0x14u) == 0u)
        {
            eax = rd32(edi + 0x14u);
            goto L_100e9f65;
        }
        eax = rd32(edi + 0x14u);
        if (eax == edx) goto L_100e9f73;
L_100e9f65: ;
        if (ebp + 1u < 0x14u)
        {
            ebp = ebp + 1u;
            edi = edi + 0x70u;
            goto L_100e9f5a;
        }
L_100ea00c: ;
        t18 = (ecx & 0xffffff00u) | rd8(ebx + 4u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t19 = cow_cdecl(g, COW_IMG(0x100ea140u), 1, t18);
        t20 = g->edx;
        t21 = rd32(t19 + 0x34u);
        wr8(t19 + 1u, 0u);
        t22 = rd16(esi + 4u);
        wr16(t19 + 0x18u, (uint16_t)t22);
        t23 = rd32(esi);
        wr32(t19 + 0x14u, t23);
        t24 = (rd8(esi + 6u) & 8u) ^ (t21 & 0xfffffff7u);
        wr32(t19 + 0x34u, t24);
        t25 = (rd8(esi + 6u) & 0x20u) ^ ((t24 & 0xffffff00u) | (t24 & 0xdfu));
        wr32(t19 + 0x34u, t25);
        t26 = (rd8(esi + 6u) & 0x40u) ^ (t25 & 0xffffffbfu);
        wr32(t19 + 0x34u, t26);
        t27 = (rd8(esi + 6u) & 4u) ^ ((t26 & 0xffffff00u) | (t26 & 0xfbu));
        wr32(t19 + 0x34u, t27);
        t28 = (rd8(esi + 6u) & 3u) | (t27 & 0xfffffffcu);
        wr32(t19 + 0x34u, t28);
        t29 = (rd8(esi + 6u) & 0x10u) ^ ((t28 & 0xffffff00u) | (t28 & 0xefu));
        wr32(t19 + 0x34u, t29);
        t30 = (rd8(esi + 6u) & 0x80u) ^ ((t29 & 0xffffff00u) | (t29 & 0x7fu));
        wr32(t19 + 0x34u, t30);
        t31 = rd16(esi + 8u);
        wr16(t19 + 0x2eu, (uint16_t)t31);
        t32 = rd16(esi + 8u);
        wr16(t19 + 0x30u, (uint16_t)t32);
        g->eax = (t28 & 0xffff0000u) | t31;
        g->ecx = (t29 & 0xffff0000u) | t32;
        t33 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        t34 = g->ecx;
        wr32(t19 + 0x1cu, t33);
        wr8(t19 + 2u, 0u);
        ecx = t34;
    }
L_100ea0ac: ;
    t35 = rd32(sp0 + 0xcu) - 1u;
    t36 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t35);
    if (t36 != 1u)
    {
        esi = esi + 0xcu;
        goto L_100e9f18;
    }
    if (rd8(ebx + 4u) != 5u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(ebx + 4u);
        ecx = (uint8_t)ecx;
    }
    else
    {
        ecx = 0u;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    edx = (uint8_t)ecx * 0x231u;
    ebx = 0x14u;
    ebp = (uint8_t)ecx * 0x8c4u + rd32(COW_IMG(0x104dfd98u)) + 0x57d8u;
    ecx = (uint8_t)ecx;
L_100ea0f8: ;
    if (rd32(ebp + 0x14u) != 0u)
    {
        esi = rd32(ebp + 0x14u);
        eax = 0u;
        ecx = loc_4;
L_100ea105: ;
        if (rd32(ecx) == 0u)
        {
            edx = rd32(ecx);
            goto L_100ea10f;
        }
        edx = rd32(ecx);
        if (edx == esi) goto L_100ea11a;
L_100ea10f: ;
        if (eax + 1u < 0x14u)
        {
            eax = eax + 1u;
            ecx = ecx + 0xcu;
            goto L_100ea105;
        }
L_100ea11f: ;
        edi = ebp;
        eax = 0u;
        ecx = 0x1cu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    }
L_100ea12a: ;
    if (ebx != 1u)
    {
        ebx = ebx - 1u;
        ebp = ebp + 0x70u;
        goto L_100ea0f8;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t37 = cow_stdcall(g, COW_IMG(0x100e9a70u), 0);
    t38 = g->edx;
    g->edx = t38;
    return (t37 & 0xffffff00u) | 1u;
L_100e9f73: ;
    t4 = rd32(edi + 0x34u);
    t5 = rd16(esi + 4u);
    wr16(edi + 0x18u, (uint16_t)t5);
    t6 = rd32(esi);
    wr32(edi + 0x14u, t6);
    t7 = (rd8(esi + 6u) & 8u) ^ (t4 & 0xfffffff7u);
    wr32(edi + 0x34u, t7);
    t8 = (rd8(esi + 6u) & 0x20u) ^ ((t7 & 0xffffff00u) | (t7 & 0xdfu));
    wr32(edi + 0x34u, t8);
    t9 = (rd8(esi + 6u) & 0x40u) ^ (t8 & 0xffffffbfu);
    wr32(edi + 0x34u, t9);
    t10 = (rd8(esi + 6u) & 4u) ^ ((t9 & 0xffffff00u) | (t9 & 0xfbu));
    wr32(edi + 0x34u, t10);
    t11 = (rd8(esi + 6u) & 3u) | (t10 & 0xfffffffcu);
    wr32(edi + 0x34u, t11);
    t12 = (rd8(esi + 6u) & 0x10u) ^ ((t11 & 0xffffff00u) | (t11 & 0xefu));
    wr32(edi + 0x34u, t12);
    t13 = (rd8(esi + 6u) & 0x80u) ^ ((t12 & 0xffffff00u) | (t12 & 0x7fu));
    wr32(edi + 0x34u, t13);
    if (rd16(edi + 0x2eu) == rd16(esi + 8u))
    {
        eax = (t11 & 0xffff0000u) | rd16(esi + 8u);
        ecx = (t12 & 0xffffff00u) | (t12 & 0x7fu);
        edx = t13;
    }
    else
    {
        eax = (t11 & 0xffff0000u) | rd16(esi + 8u);
        ecx = (t12 & 0xffffff00u) | (t12 & 0x7fu);
        edx = t13;
        wr16(edi + 0x2eu, (uint16_t)eax);
        t14 = rd16(esi + 8u);
        wr16(edi + 0x30u, (uint16_t)t14);
        eax = (eax & 0xffff0000u) | t14;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t15 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t16 = g->ecx;
    t17 = g->edx;
    wr32(edi + 0x1cu, t15);
    if (ebp < 0x14u)
    {
        ecx = t16;
        goto L_100ea0ac;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    goto L_100ea00c;
L_100ea11a: ;
    if (eax < 0x14u) goto L_100ea12a;
    goto L_100ea11f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e9ee0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e9ee0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
