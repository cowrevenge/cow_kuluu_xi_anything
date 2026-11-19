/* f_0x1000fbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000fbf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_3c;
    uint32_t loc_40;
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
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 72u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1000fc08u: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); g->ebp = rd32(sp0 - 0x28u); g->ebx = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x2cu); goto E_1000fc08;
    case 0x1000fc09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000fc09;
    case 0x1000fc10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000fc10;
    case 0x1000fc1au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000fc1a;
    case 0x1000fc2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000fc2e;
    case 0x1000fc39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000fc39;
    case 0x1000fc4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000fc4b;
    case 0x1000fc67u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fc67;
    case 0x1000fc6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fc6f;
    case 0x1000fc77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fc77;
    case 0x1000fc7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fc7b;
    case 0x1000fcafu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcaf;
    case 0x1000fcb4u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcb4;
    case 0x1000fcb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000fcb7;
    case 0x1000fcc1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcc1;
    case 0x1000fcc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcc9;
    case 0x1000fccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fccf;
    case 0x1000fcd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcd8;
    case 0x1000fcddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fcdd;
    case 0x1000fce0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fce0;
    case 0x1000fce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fce8;
    case 0x1000fce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); goto E_1000fce9;
    case 0x1000fd0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); goto E_1000fd0a;
    case 0x1000fd1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1000fd1d;
    case 0x1000fd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1000fd2e;
    case 0x1000fd3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1000fd3e;
    case 0x1000fd57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1000fd57;
    case 0x1000fd5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); goto E_1000fd5e;
    case 0x1000fd6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); goto E_1000fd6d;
    default: break;
    }
#endif

    COW_AT(1000fbf0)
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    if (rd32(rd32(COW_IMG(0x10456700u))) == 0u)
    {
        edx = in_edx;
        edi = in_edi;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
    }
    else
    {
        ebx = rd32(COW_IMG(0x10456700u));
    COW_AT(1000fc08)
        wr32(sp0 - 0x30u, in_edi);
        ecx = self;
        edx = in_edx;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
L_1000fc09: ;
    COW_AT(1000fc09)
        if (rd32(ebx + 0x18u) == 0u)
        {
            eax = rd32(ebx + 0x18u);
            goto L_1000fc1a;
        }
        eax = rd32(ebx + 0x18u);
    COW_AT(1000fc10)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t1 = cow_thiscall(g, eax, ecx, 0);
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 != 0u)
        {
            ecx = t2;
            edx = t3;
            goto L_1000fccf;
        }
        eax = t1;
        ecx = t2;
        edx = t3;
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
L_1000fc1a: ;
    COW_AT(1000fc1a)
        wr32(sp0 - 0x34u, 0u);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        cow_thiscall(g, rd32(ebx + 4u), ecx, 1, 0u);
        t4 = g->ecx;
        t5 = g->edx;
        if (rd32(COW_IMG(0x104566f0u)) != 0x84u)
        {
            ecx = t4;
            edx = t5;
            goto L_1000fccf;
        }
        ecx = t4;
        edx = t5;
    COW_AT(1000fc2e)
        if (rd32(ebx + 0x1cu) == 0u) goto L_1000fcdd;
        eax = rd32(ebx + 0x1cu);
    COW_AT(1000fc39)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t6 = cow_thiscall(g, eax, ecx, 0);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x20u, 0u);
        if (t6 == 0u)
        {
            ecx = t7;
            edx = t8;
        }
        else
        {
            ecx = t7;
            edx = t8;
            esi = t6;
            edi = rd32(ebx);
    COW_AT(1000fc4b)
            wr32(sp0 - 0x34u, sp0 - 0x20u);
            wr32(sp0 - 0x38u, COW_IMG(0x1034a148u));
            wr32(sp0 - 0x3cu, 1u);
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, COW_IMG(0x1034a138u));
            g->eax = sp0 - 0x20u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t9 = cow_stdcall(g, rd32(COW_IMG(0x103294a4u)), 5, COW_IMG(0x1034a138u), 0u, 1u, COW_IMG(0x1034a148u), sp0 - 0x20u);   /* ole32.dll!CoCreateInstance */
            t10 = g->ecx;
            t11 = g->edx;
            if ((int32_t)t9 >= 0)
            {
                ecx = t10;
                edx = t11;
    COW_AT(1000fc77)
                if (rd32(esi) == 0u) goto L_1000fcc1;
L_1000fc7b: ;
    COW_AT(1000fc7b)
                t15 = rd32(rd32(esi + 4u));
                wr32(sp0 - 0x10u, t15);
                t16 = rd32(rd32(esi + 4u) + 4u);
                wr32(sp0 - 0xcu, t16);
                t17 = rd32(rd32(esi + 4u) + 8u);
                wr32(sp0 - 8u, t17);
                t18 = rd32(rd32(esi + 4u) + 0xcu);
                wr32(sp0 - 4u, t18);
                wr32(sp0 - 0x34u, sp0 - 0x10u);
                wr32(sp0 - 0x38u, 1u);
                wr32(sp0 - 0x3cu, edi);
                t19 = rd32(sp0 - 0x20u);
                wr32(sp0 - 0x40u, t19);
                if (rd32(esi) != 1u)
                {
                    eax = t19;
                    edx = rd32(rd32(sp0 - 0x20u));
                    loc_3c = edi;
                    loc_40 = t19;
    COW_AT(1000fcb4)
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, rd32(edx + 0x20u), sp0 - 0x10u, 4, loc_40, loc_3c, 1u, sp0 - 0x10u);
                    t22 = g->ecx;
                    t23 = g->edx;
                    ecx = t22;
                    edx = t23;
                }
                else
                {
                    eax = t19;
                    edx = rd32(rd32(sp0 - 0x20u));
                    loc_3c = edi;
                    loc_40 = t19;
    COW_AT(1000fcaf)
                    g->edx = edx;
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, rd32(edx + 0x18u), sp0 - 0x10u, 4, loc_40, loc_3c, 1u, sp0 - 0x10u);
                    t20 = g->ecx;
                    t21 = g->edx;
                    ecx = t20;
                    edx = t21;
                }
    COW_AT(1000fcb7)
                if (rd32(esi + 8u) != 0u)
                {
                    esi = esi + 8u;
                    goto L_1000fc7b;
                }
L_1000fcc1: ;
    COW_AT(1000fcc1)
                if (rd32(sp0 - 0x20u) != 0u)
                {
                    eax = rd32(sp0 - 0x20u);
    COW_AT(1000fcc9)
                    wr32(sp0 - 0x34u, eax);
                    g->edx = rd32(eax);
                    t24 = rd32(eax);
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, rd32(t24 + 8u), ecx, 1, eax);
                    t25 = g->ecx;
                    t26 = g->edx;
                    ecx = t25;
                    edx = t26;
                }
            }
            else
            {
                ecx = t10;
                edx = t11;
    COW_AT(1000fc67)
                if (rd32(sp0 - 0x20u) != 0u)
                {
                    eax = rd32(sp0 - 0x20u);
    COW_AT(1000fc6f)
                    wr32(sp0 - 0x34u, eax);
                    g->edx = edx;
                    t12 = rd32(eax);
                    g->esp = sp0 - 0x30u;
                    cow_thiscall(g, rd32(t12 + 8u), t12, 1, eax);
                    t13 = g->ecx;
                    t14 = g->edx;
                    ecx = t13;
                    edx = t14;
                }
            }
        }
L_1000fccf: ;
    COW_AT(1000fccf)
        if (rd32(COW_IMG(0x104566f0u)) != 0x64u) goto L_1000fcdd;
    COW_AT(1000fcd8)
        ebx = ebx + 0x1cu;
L_1000fce0: ;
    COW_AT(1000fce0)
        if (rd32(ebx) != 0u)
        {
            loc_24 = rd32(sp0 - 0x24u);
            loc_28 = rd32(sp0 - 0x28u);
            loc_2c = rd32(sp0 - 0x2cu);
            loc_30 = rd32(sp0 - 0x30u);
            goto L_1000fc09;
        }
    COW_AT(1000fce8)
        edi = rd32(sp0 - 0x30u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
    }
    COW_AT(1000fce9)
    wr32(sp0 - 0x30u, sp0 - 0x1cu);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, COW_IMG(0x104566f0u));
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    g->eax = sp0 - 0x1cu;
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    t27 = cow_stdcall(g, COW_IMG(0x1000fa80u), 4, COW_IMG(0x104566f0u), 0u, sp0 - 0x14u, sp0 - 0x1cu);
    t28 = g->edx;
    if ((int32_t)t27 < 0)
    {
        eax = t27;
        edx = t28;
    }
    else
    {
    COW_AT(1000fd0a)
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        t29 = rd32(sp0 - 0x1cu);
        wr32(sp0 - 0x34u, t29);
        g->eax = t29;
        g->edx = rd32(t29);
        t30 = rd32(t29);
        g->esp = sp0 - 0x2cu;
        t31 = cow_thiscall(g, rd32(t30 + 0x1cu), sp0 - 0x18u, 2, t29, sp0 - 0x18u);
        t32 = g->ecx;
        t33 = g->edx;
        if ((int32_t)t31 < 0)
        {
            eax = t31;
            edx = t33;
        }
        else
        {
            eax = t31;
            ecx = t32;
            edx = t33;
    COW_AT(1000fd1d)
            wr32(sp0 - 0x30u, COW_IMG(0x10350140u));
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x2cu;
            t34 = cow_stdcall(g, rd32(COW_IMG(0x10329134u)), 1, COW_IMG(0x10350140u));   /* kernel32.dll!LoadLibraryA */
            t35 = g->ecx;
            t36 = g->edx;
            if (t34 != 0u)
            {
                eax = t34;
                ecx = t35;
                edx = t36;
                esi = t34;
    COW_AT(1000fd2e)
                wr32(sp0 - 0x30u, COW_IMG(0x1035012cu));
                wr32(sp0 - 0x34u, esi);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x2cu;
                t37 = cow_stdcall(g, rd32(COW_IMG(0x10329138u)), 2, esi, COW_IMG(0x1035012cu));   /* kernel32.dll!GetProcAddress */
                t38 = g->ecx;
                t39 = g->edx;
                if (t37 == 0u)
                {
                    eax = t37;
                    ecx = t38;
                    edx = t39;
                }
                else
                {
                    eax = t37;
    COW_AT(1000fd3e)
                    t40 = rd32(rd32(sp0 - 0x18u) + 0x14u);
                    wr32(sp0 - 0x30u, t40);
                    t41 = rd32(rd32(sp0 - 0x18u) + 0x10u);
                    wr32(sp0 - 0x34u, t41);
                    t42 = (t41 & 0xffff0000u) | rd16(rd32(sp0 - 0x18u) + 0x1au);
                    wr32(sp0 - 0x38u, t42);
                    t43 = (t42 & 0xffff0000u) | rd16(rd32(sp0 - 0x18u) + 0x18u);
                    wr32(sp0 - 0x3cu, t43);
                    t44 = rd32(sp0 - 0x18u);
                    wr32(sp0 - 0x40u, t44);
                    g->eax = eax;
                    g->edx = t43;
                    g->esp = sp0 - 0x2cu;
                    t45 = cow_thiscall(g, eax, t44, 5, t44, t43, t42, t41, t40);
                    t46 = g->ecx;
                    t47 = g->edx;
                    eax = t45;
                    ecx = t46;
                    edx = t47;
                }
    COW_AT(1000fd57)
                wr32(sp0 - 0x30u, esi);
                g->esp = sp0 - 0x2cu;
                cow_stdcall(g, rd32(COW_IMG(0x10329130u)), 1, esi);   /* kernel32.dll!FreeLibrary */
            }
    COW_AT(1000fd5e)
            t48 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x30u, t48);
            t49 = rd32(sp0 - 0x1cu);
            wr32(sp0 - 0x34u, t49);
            g->eax = t49;
            g->edx = t48;
            g->esp = sp0 - 0x2cu;
            t50 = cow_thiscall(g, rd32(rd32(t49) + 0x30u), rd32(t49), 2, t49, t48);
            t51 = g->edx;
            eax = t50;
            edx = t51;
        }
    }
    COW_AT(1000fd6d)
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x1000fd90u), sp0 - 0x1cu, edx, 0);
    t52 = g->ecx;
    t53 = g->edx;
    t54 = rd32(sp0 - 0x14u);
    wr32(sp0 - 0x30u, t54);
    g->edx = t53;
    cow_stdcall(g, rd32(COW_IMG(0x10329310u)), 1, t54);   /* oleaut32.dll!SysFreeString */
    t55 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = t55;
    return 0u;
L_1000fcdd: ;
    COW_AT(1000fcdd)
    ebx = ebx + 0x24u;
    goto L_1000fce0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1000fbf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1000fc08u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc09u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc10u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc1au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fc4bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x20u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1000fc67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000fc6fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000fc77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1000fc7bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fcafu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x40u;
        g->ecx = sp0 - 0x10u;
        g->ebp = 0u;
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1000fcb4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x40u;
        g->ecx = sp0 - 0x10u;
        g->ebp = 0u;
        wr32(sp0 - 0x38u, 1u);
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1000fcb7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x1000fcc1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fcc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fccfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fcd8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fcddu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fce0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fce8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x30u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fce9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fd0au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        wr32(sp0 - 0x34u, sp0 - 0x14u);
        wr32(sp0 - 0x30u, sp0 - 0x1cu);
        (void)sp0;
        return 1;
    }
    case 0x1000fd1du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        wr32(sp0 - 0x30u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x1000fd2eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1000fd3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1000fd57u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1000fd5eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    case 0x1000fd6du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1000fbf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1000fbf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
