/* f_0x1023dbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1023dbb0(Guest* g)
{
    unsigned af;
    unsigned cf;
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
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;

    g->esp = sp0 - 0x1cu;
    t1 = cow_stdcall(g, COW_IMG(0x100db6b0u), 0);
    t2 = rd32(COW_IMG(0x10669080u));
    edi = rd32(COW_IMG(0x10669080u)) + 0x34u;
    eax = 0u;
    ecx = 0x2c0u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(t2 + 0x14u, 0u);
    wr32(t2 + 0x18u, 0u);
    wr32(t2 + 0x1cu, 0u);
    wr32(t2 + 0x20u, 0u);
    wr32(t2 + 0x24u, 0u);
    wr32(t2 + 0x2cu, 0u);
    wr8(t2 + 0x32u, 0u);
    wr8(t2 + 0x30u, (uint8_t)(eax | 0xffu));
    wr8(t2 + 0x31u, (uint8_t)(eax | 0xffu));
    t3 = rd32(COW_IMG(0x10669050u));
    wr32(t3 + 0x1cu, 0u);
    edi = t3 + 0x20u;
    eax = 0u;
    ecx = 8u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(rd32(COW_IMG(0x10669050u)) + 0x2cu, 1u);
    t4 = rd32(COW_IMG(0x10669050u));
    wr32(t4 + 0x30u, 1u);
    t5 = rd32(COW_IMG(0x10669080u));
    wr32(t5 + 0x20u, 0u);
    wr32(rd32(COW_IMG(0x10669080u)) + 0x24u, 0u);
    eax = t5;
    edx = t4;
    ebx = 0u;
    ebp = 0u;
    edi = 0u;
    loc_4 = t1;
    loc_c = 0u;
L_1023dc3e: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t6 = cow_stdcall(g, COW_IMG(0x100db6e0u), 1, ebx);
    t7 = g->edx;
    if (t6 == 0u)
    {
        eax = t6;
        edx = t7;
    }
    else
    {
        eax = t6;
        edx = t7;
        loc_8 = t6;
        if (eax == 1u) goto L_1023dc64;
        if (eax != 2u) goto L_1023dec6;
L_1023dc64: ;
        g->eax = eax;
        g->esp = sp0 - 0x1cu;
        t8 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, ebx);
        esi = t8;
        edi = COW_IMG(0x1034f2b8u);
        ecx = 2u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (!zf)
        {
            t9 = rd32(COW_IMG(0x10669050u));
            wr32(t9 + 0x20u, 1u);
            t10 = rd32(COW_IMG(0x10669050u));
            wr32(t10 + 0x28u, 1u);
            g->eax = t10;
            g->esp = sp0 - 0x1cu;
            t11 = cow_stdcall(g, COW_IMG(0x100db6d0u), 1, ebx);
            eax = t11;
            ecx = rd32(COW_IMG(0x10669080u));
            edx = ebp + rd32(COW_IMG(0x10669080u)) + 0x44u;
L_1023dcd5: ;
            t12 = rd8(eax);
            wr8(edx, (uint8_t)t12);
            if ((uint8_t)t12 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t12;
                edx = edx + 1u;
                goto L_1023dcd5;
            }
            eax = eax + 1u;
            edx = edx + 1u;
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103601bcu));
            t13 = rd32(COW_IMG(0x103601bcu));
            g->esp = sp0 - 0x1cu;
            t14 = cow_stdcall(g, COW_IMG(0x100db7a0u), 1, ebx);
            t15 = g->ecx;
            eax = t14;
            ecx = t15;
            edx = ebp + rd32(COW_IMG(0x10669080u)) + 0x54u;
L_1023dcf5: ;
            t16 = rd8(eax);
            wr8(edx, (uint8_t)t16);
            if ((uint8_t)t16 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t16;
                edx = edx + 1u;
                goto L_1023dcf5;
            }
            edx = edx + 1u;
            t17 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t17 + 0x64u, ebx);
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x68u, 1u);
            g->eax = t17;
            g->esp = sp0 - 0x1cu;
            t18 = cow_stdcall(g, COW_IMG(0x100db780u), 1, ebx);
            t19 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t19 + 0x70u, t18);
            g->edx = t19;
            t20 = cow_stdcall(g, COW_IMG(0x100db710u), 1, ebx);
            t21 = g->edx;
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x74u, t20);
            t22 = cow_stdcall(g, COW_IMG(0x100db720u), 1, ebx);
            t23 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t23 + 0x78u, t22);
            g->edx = t23;
            t24 = cow_stdcall(g, COW_IMG(0x100db730u), 1, ebx);
            t25 = g->edx;
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x7cu, t24);
            t26 = cow_stdcall(g, COW_IMG(0x100db740u), 1, ebx);
            t27 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t27 + 0x80u, t26);
            g->edx = t27;
            t28 = cow_stdcall(g, COW_IMG(0x100db750u), 1, ebx);
            t29 = g->edx;
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x84u, t28);
            t30 = cow_stdcall(g, COW_IMG(0x100db760u), 1, ebx);
            t31 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t31 + 0x88u, t30);
            g->edx = t31;
            t32 = cow_stdcall(g, COW_IMG(0x100db7e0u), 1, ebx);
            t33 = g->edx;
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x8cu, t32);
            t34 = cow_stdcall(g, COW_IMG(0x100db6f0u), 1, ebx);
            t35 = rd32(COW_IMG(0x10669080u));
            wr32(ebp + t35 + 0x90u, t34);
            g->edx = t35;
            t36 = cow_stdcall(g, COW_IMG(0x100db700u), 1, ebx);
            t37 = g->edx;
            wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x94u, t36);
            if (loc_8 != 1u)
            {
                edx = t37;
                wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x98u, 1u);
            }
            else
            {
                wr32(ebp + rd32(COW_IMG(0x10669080u)) + 0x98u, 0u);
                t38 = rd32(rd32(COW_IMG(0x10669080u)) + 0x24u) + 1u;
                wr32(rd32(COW_IMG(0x10669080u)) + 0x24u, t38);
                wr32(rd32(COW_IMG(0x10669080u)) + 0x20u, rd32(rd32(COW_IMG(0x10669080u)) + 0x20u) + 1u);
                edx = t38;
            }
            if (rd32(ebp + rd32(COW_IMG(0x10669080u)) + 0x8cu) != 0u)
            {
                eax = rd32(COW_IMG(0x10669080u));
            }
            else
            {
                eax = rd32(COW_IMG(0x10669080u));
                wr32(eax + ebp + 0x8cu, 1u);
            }
            g->eax = eax;
            g->ecx = rd32(COW_IMG(0x103601bcu));
            g->edx = edx;
            t39 = rd32(COW_IMG(0x103601bcu));
            g->esp = sp0 - 0x1cu;
            t40 = cow_stdcall(g, COW_IMG(0x100db7d0u), 1, ebx);
            t41 = g->ecx;
            t42 = g->edx;
            t43 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 4u, t40);
            if (t43 != 0u)
            {
                eax = t43;
            }
            else
            {
                eax = COW_IMG(0x103881b8u);
            }
            ecx = eax;
            edx = ebp + rd32(COW_IMG(0x10669080u)) + 0x34u;
L_1023de7e: ;
            t44 = rd8(ecx);
            wr8(edx, (uint8_t)t44);
            if ((uint8_t)t44 != 0u)
            {
                eax = (eax & 0xffffff00u) | t44;
                ecx = ecx + 1u;
                edx = edx + 1u;
                goto L_1023de7e;
            }
            eax = (eax & 0xffffff00u) | t44;
            edx = edx + 1u;
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t45 = cow_stdcall(g, COW_IMG(0x100db770u), 1, ebx);
            eax = t45;
            ecx = 0u;
            edx = ebp + 0x9cu;
            esi = 1u;
L_1023de9c: ;
            t46 = rd16(eax + ecx * 2u);
            wr16(edx + rd32(COW_IMG(0x10669080u)), (uint16_t)t46);
            if ((int32_t)(ecx + 1u) < 8)
            {
                ecx = ecx + 1u;
                edx = edx + 2u;
                esi = (esi & 0xffff0000u) | t46;
                goto L_1023de9c;
            }
            edx = edx + 2u;
            ebp = ebp + 0xb0u;
        }
        else
        {
            if (loc_8 != 1u)
            {
                edx = 0u;
            }
            else
            {
                wr32(rd32(COW_IMG(0x10669050u)) + 0x24u, 1u);
                wr32(rd32(COW_IMG(0x10669080u)) + 0x20u, rd32(rd32(COW_IMG(0x10669080u)) + 0x20u) + 1u);
                edx = 0u;
            }
        }
        eax = loc_c + 1u;
        edi = loc_c + 1u;
        loc_c = loc_c + 1u;
    }
L_1023dec6: ;
    if ((int32_t)(ebx + 1u) < 16)
    {
        ebx = ebx + 1u;
        goto L_1023dc3e;
    }
    if (rd32(rd32(COW_IMG(0x10669050u)) + 0x24u) == 0u)
    {
        eax = rd32(COW_IMG(0x10669050u));
        if (loc_4 == 0x10u)
        {
            wr32(eax + 0x24u, 2u);
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023dbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023dbb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
