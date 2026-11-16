/* f_0x102f69d3 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102f69d3(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;

    if (rd32(rd32(sp0 + 4u) + 0x10u) == 0xcau)
    {
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
        wr32(rd32(esi) + 0x14u, 0x12u);
        t1 = rd32(esi + 0x10u);
        wr32(rd32(esi) + 0x18u, t1);
        g->esp = sp0 - 0xcu;
        cow_thiscall_cdecl(g, rd32(rd32(esi)), t1, 1, esi);
    }
    t2 = rd32(esi + 0x2cu);
    if (t2 << 3u > rd32(esi + 0x30u))
    {
        eax = t2;
        ecx = rd32(esi + 0x30u);
        if (eax << 2u > ecx)
        {
            edx = eax << 2u;
            if (eax * 2u > ecx)
            {
                t27 = rd32(esi + 0x18u);
                wr32(esi + 0x5cu, t27);
                t28 = rd32(esi + 0x1cu);
                wr32(esi + 0x114u, 8u);
                eax = t28;
            }
            else
            {
                eax = eax * 2u;
                t19 = rd32(esi + 0x18u);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t20 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t19, 2u);
                t21 = g->ecx;
                t22 = g->edx;
                t23 = rd32(esi + 0x1cu);
                wr32(esi + 0x5cu, t20);
                g->ecx = t21;
                g->edx = t22;
                g->esp = sp0 - 0x1cu;
                t24 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t23, 2u);
                t25 = g->ecx;
                t26 = g->edx;
                wr32(esi + 0x114u, 4u);
                eax = t24;
                ecx = t25;
                edx = t26;
            }
        }
        else
        {
            edx = eax << 2u;
            t11 = rd32(esi + 0x18u);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t12 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t11, 4u);
            t13 = g->ecx;
            t14 = g->edx;
            t15 = rd32(esi + 0x1cu);
            wr32(esi + 0x5cu, t12);
            g->ecx = t13;
            g->edx = t14;
            g->esp = sp0 - 0x1cu;
            t16 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t15, 4u);
            t17 = g->ecx;
            t18 = g->edx;
            wr32(esi + 0x114u, 2u);
            eax = t16;
            ecx = t17;
            edx = t18;
        }
    }
    else
    {
        eax = t2;
        ecx = rd32(esi + 0x30u);
        edx = t2 << 3u;
        t3 = rd32(esi + 0x18u);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t4 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t3, 8u);
        t5 = g->ecx;
        t6 = g->edx;
        t7 = rd32(esi + 0x1cu);
        wr32(esi + 0x5cu, t4);
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x1cu;
        t8 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t7, 8u);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(esi + 0x114u, 1u);
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    t29 = rd32(esi + 0x20u);
    wr32(esi + 0x60u, eax);
    if ((int32_t)t29 > 0)
    {
        eax = rd32(esi + 0xc4u);
        eax = eax + 0xcu;
        loc_8 = 0u;
L_102f6ab3: ;
        t30 = rd32(esi + 0x114u);
        t31 = rd32(esi + 0x114u);
        wr32(sp0 + 4u, t30);
        if ((int32_t)t31 >= 8)
        {
            edx = t30;
        }
        else
        {
            edx = t30;
            ecx = rd32(esi + 0x10cu) * edx;
L_102f6aca: ;
            if ((int32_t)(rd32(eax - 4u) * rd32(sp0 + 4u) * 2u) > (int32_t)ecx) goto L_102f6af9;
            if ((int32_t)(rd32(eax) * rd32(sp0 + 4u) * 2u) > (int32_t)(rd32(esi + 0x110u) * edx)) goto L_102f6af9;
            t32 = rd32(sp0 + 4u) * 2u;
            t33 = rd32(sp0 + 4u);
            wr32(sp0 + 4u, t32);
            if ((int32_t)(t33 * 2u) < 8) goto L_102f6aca;
        }
L_102f6af9: ;
        t34 = rd32(sp0 + 4u);
        wr32(eax + 0x18u, t34);
        if ((int32_t)(loc_8 + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            eax = eax + 0x54u;
            loc_8 = loc_8 + 1u;
            goto L_102f6ab3;
        }
        ecx = loc_8 + 1u;
    }
    if ((int32_t)rd32(esi + 0x20u) > 0)
    {
        edi = rd32(esi + 0xc4u);
        ebx = 0u;
        edi = edi + 0x24u;
L_102f6b1d: ;
        t35 = rd32(esi + 0x10cu) << 3u;
        t36 = rd32(edi - 0x1cu) * rd32(edi) * rd32(esi + 0x18u);
        g->eax = t36;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t37 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t36, t35);
        t38 = g->ecx;
        t39 = g->edx;
        wr32(edi + 4u, t37);
        t40 = rd32(esi + 0x110u) << 3u;
        t41 = rd32(edi - 0x18u) * rd32(esi + 0x1cu) * rd32(edi);
        g->eax = t41;
        g->ecx = t38;
        g->edx = t39;
        g->esp = sp0 - 0x1cu;
        t42 = cow_cdecl(g, COW_IMG(0x102f58cdu), 2, t41, t40);
        t43 = g->ecx;
        t44 = g->edx;
        wr32(edi + 8u, t42);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(esi + 0x20u))
        {
            ecx = t43;
            edx = t44;
            ebx = ebx + 1u;
            edi = edi + 0x54u;
            goto L_102f6b1d;
        }
    }
    if (rd32(esi + 0x28u) == 1u)
    {
        ecx = 1u;
        goto L_102f6b8e;
    }
    eax = rd32(esi + 0x28u);
    zf = rd32(esi + 0x28u) == 1u;
    sf = (int32_t)(rd32(esi + 0x28u) - 1u) < 0;
    of = ((rd32(esi + 0x28u) ^ 1u) & (rd32(esi + 0x28u) ^ rd32(esi + 0x28u) - 1u)) >> 0x1fu;
    if (zf || sf != of)
    {
        ecx = 1u;
        goto L_102f6b86;
    }
    if ((int32_t)eax <= 3)
    {
        ecx = 3u;
        goto L_102f6b8e;
    }
    if ((int32_t)eax > 5)
    {
        ecx = 3u;
        goto L_102f6b86;
    }
    wr32(esi + 0x64u, 4u);
    ecx = 3u;
L_102f6b91: ;
    if (rd8(esi + 0x4au) == 0u)
    {
        eax = rd32(esi + 0x64u);
    }
    else
    {
        eax = 1u;
    }
    wr32(esi + 0x68u, eax);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t46 = cow_call_regs(g, COW_IMG(0x102f6962u), g->eax, g->ecx, esi, 1, 0);
    t47 = g->edx;
    if ((uint8_t)t46 == 0u)
    {
        edx = t47;
        wr32(esi + 0x6cu, 1u);
    }
    else
    {
        edx = t47;
        t48 = rd32(esi + 0x110u);
        wr32(esi + 0x6cu, t48);
    }
    g->edx = edx;
    return;
L_102f6b86: ;
    t45 = rd32(esi + 0x20u);
    wr32(esi + 0x64u, t45);
    goto L_102f6b91;
L_102f6b8e: ;
    wr32(esi + 0x64u, ecx);
    goto L_102f6b91;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f69d3(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f69d3(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
