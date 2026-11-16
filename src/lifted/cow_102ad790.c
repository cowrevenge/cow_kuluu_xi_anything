/* f_0x102ad790 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102ad790(Guest* g)
{
    double d19;
    double d25;
    double d33;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 0x34u) == 0u)
    {
        eax = rd32(rd32(sp0 + 4u) + 0x34u);
        ecx = rd32(sp0 + 4u);
        edx = in_edx;
        goto L_102ad937;
    }
    eax = rd32(rd32(sp0 + 4u) + 0x34u);
    ecx = rd32(sp0 + 4u);
    if (rd32(eax + 0x14u) == 0u)
    {
        edx = rd32(eax + 0x14u);
        goto L_102ad937;
    }
    edx = rd32(eax + 0x14u);
    t1 = rd32(eax + 0x54u);
    if (rd32(eax + 0x54u) != 0u)
    {
        ebx = t1;
        loc_8 = t1;
        goto L_102ad7e7;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t2 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bf050u));
    g->esp = sp0;
    g->edx = t4;
    cow_tailcall(g, COW_IMG(0x102858b0u), t2, t3, t4);
    return;
L_102ad7e7: ;
    if (rd32(eax + 0x64u) != 0u)
    {
        ebp = rd32(eax + 0x64u);
        goto L_102ad819;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t5 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103bf118u));
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, COW_IMG(0x102858b0u), t5, t6, t7);
    return;
L_102ad819: ;
    if ((int32_t)rd32(ecx + 0x44u) <= 0) goto L_102ad95d;
    esi = 0u;
    edi = 0u;
    loc_4 = 0u;
L_102ad832: ;
    t8 = rd32(edi * 4u + rd32(ecx + 0x48u));
    if ((int32_t)rd32(edi * 4u + rd32(ecx + 0x48u)) >= 2)
    {
        loc_c = t8;
        t13 = ebx + esi * 0xcu;
        t14 = ebx + esi * 0xcu + 0xcu;
        t15 = ebp + esi * 0xcu;
        g->eax = t14;
        g->ecx = ecx;
        g->edx = esi * 3u + 3u;
        g->esp = sp0 - 0x1cu;
        t16 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, t15, t14, t13);
        t17 = g->ecx;
        t18 = g->edx;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, t15);
        d19 = cow_take_float(g);
        if ((int32_t)(loc_c - 2u) <= 0)
        {
            esi = esi + 1u;
        }
        else
        {
            eax = loc_c - 2u;
            esi = esi + 1u;
            ecx = esi * 3u + 3u;
            edx = loc_8;
            ebx = ebp + esi * 0xcu;
            edi = esi * 0xcu + loc_8 + 0xcu;
            esi = eax + esi;
            loc_c = eax;
L_102ad8cb: ;
            g->eax = edi - 0x18u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t20 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, ebx, edi, edi - 0x18u);
            t21 = g->ecx;
            t22 = g->edx;
            g->ecx = t21;
            g->edx = t22;
            g->esp = sp0 - 0x28u;
            cow_cdecl(g, COW_IMG(0x10274910u), 1, ebx);
            t23 = g->ecx;
            t24 = g->edx;
            d25 = cow_take_float(g);
            if (loc_c != 1u)
            {
                ecx = t23;
                edx = t24;
                ebx = ebx + 0xcu;
                edi = edi + 0xcu;
                loc_c = loc_c - 1u;
                goto L_102ad8cb;
            }
            ebx = loc_8;
        }
        t26 = ebx + esi * 0xcu - 0xcu;
        t27 = ebx + esi * 0xcu;
        t28 = ebp + esi * 0xcu;
        g->eax = esi * 0xcu;
        g->ecx = t27;
        g->edx = t26;
        g->esp = sp0 - 0x1cu;
        t29 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, t28, t27, t26);
        t30 = g->ecx;
        t31 = g->edx;
        g->edx = t31;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x10274910u), 1, t28);
        t32 = g->edx;
        d33 = cow_take_float(g);
        edx = t32;
        esi = esi + 1u;
        edi = loc_4;
    }
    else
    {
        eax = t8;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t9 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b27fcu), COW_IMG(0x103bef68u));
        t10 = g->ecx;
        t11 = g->edx;
        g->edx = t11;
        g->esp = sp0 - 0x24u;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf0f4u), COW_IMG(0x103b27fcu));
        t12 = g->edx;
        wr32(ebp + esi * 0xcu, 0u);
        wr32(ebp + esi * 0xcu + 4u, 0u);
        wr32(ebp + esi * 0xcu + 8u, 0x3f800000u);
        edx = t12;
    }
    if ((int32_t)(edi + 1u) < (int32_t)rd32(rd32(sp0 + 4u) + 0x44u))
    {
        loc_4 = edi + 1u;
        edi = edi + 1u;
        goto L_102ad82e;
    }
    return;
L_102ad82e: ;
    ecx = rd32(sp0 + 4u);
    goto L_102ad832;
L_102ad937: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t34 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t35 = g->ecx;
    t36 = g->edx;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bf0dcu));
L_102ad95d: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ad790(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ad790(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
