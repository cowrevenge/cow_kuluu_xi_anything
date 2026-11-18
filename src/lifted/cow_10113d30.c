/* f_0x10113d30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10113d30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10113d41u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10113d41;
    case 0x10113d51u: eax = g->eax; ecx = g->ecx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x20u); in_esi = rd32(sp0 - 0x1cu); in_ebp = rd32(sp0 - 0x18u); in_ebx = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x14u); g->edi = rd32(sp0 - 0x20u); g->esi = rd32(sp0 - 0x1cu); goto E_10113d51;
    case 0x10113e10u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113e10;
    case 0x10113e2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; loc_10 = rd32(sp0 - 0x10u); goto E_10113e2e;
    case 0x10113e56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113e56;
    case 0x10113e6du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113e6d;
    case 0x10113e86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113e86;
    case 0x10113e92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113e92;
    case 0x10113ea7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10113ea7;
    case 0x10113ea9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113ea9;
    case 0x10113eb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); goto E_10113eb7;
    case 0x10113f26u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10113f26;
    case 0x10113f58u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113f58;
    case 0x10113f75u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113f75;
    case 0x10113f9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113f9b;
    case 0x10113faeu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113fae;
    case 0x10113fb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; goto E_10113fb6;
    case 0x10113fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; goto E_10113fba;
    case 0x10113fdfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113fdf;
    case 0x10113fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113fe5;
    case 0x10113fedu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113fed;
    case 0x10113ff1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10113ff1;
    case 0x10114005u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10114005;
    case 0x1011400bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_1011400b;
    case 0x10114019u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; goto E_10114019;
    case 0x1011401du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_1011401d;
    case 0x10114032u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; edi = g->edi; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); goto E_10114032;
    case 0x10114060u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_10114060;
    default: break;
    }
#endif

    COW_AT(10113d30)
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    eax = self + 8u;
    ecx = 0x10u;
L_10113d41: ;
    COW_AT(10113d41)
    wr32(eax + 8u, 0u);
    wr32(eax, 0u);
    wr32(eax + 4u, 0u);
    if (ecx != 1u)
    {
        eax = eax + 0x10u;
        ecx = ecx - 1u;
        goto L_10113d41;
    }
    COW_AT(10113d51)
    wr32(self + 0x278u, 0u);
    wr16(self + 0x27cu, 0u);
    wr16(self + 0x27eu, 0u);
    edi = self + 0x280u;
    eax = 0u;
    ecx = 0x38u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x24u, 0u);
    wr32(self + 0x360u, 0u);
    wr16(self + 0x364u, 0u);
    wr16(self + 0x366u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 0u);
    edi = self + 0x368u;
    ecx = 0x38u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->eax = eax;
    g->edx = 0u;
    g->esp = sp0 - 0x20u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291d4u)), 3, 0u, 0u, 0u);   /* kernel32.dll!CreateMutexA */
    t2 = g->edx;
    wr32(self, t1);
    wr16(self + 0x10au, 0u);
    wr16(self + 0x108u, 0u);
    wr16(self + 0x230u, 0u);
    wr16(self + 0x232u, 0u);
    wr8(self + 0x450u, 0u);
    wr16(self + 0x44au, 0u);
    wr16(self + 0x448u, 0u);
    wr32(self + 0x278u, 0u);
    wr16(self + 0x27cu, 0u);
    wr16(self + 0x27eu, 0u);
    edi = self + 0x280u;
    eax = 0u;
    ecx = 0x38u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(self + 0x360u, 0u);
    wr16(self + 0x364u, 0u);
    wr16(self + 0x366u, 0u);
    edi = self + 0x368u;
    ecx = 0x38u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if (rd32(COW_IMG(0x104e1b6cu)) == 0u)
    {
        edx = t2;
    COW_AT(10113e10)
        wr32(COW_IMG(0x104e1b6cu), self);
        wr32(sp0 - 0x10u, 0u);
        wr16(self + 0x230u, 0u);
        wr16(self + 0x232u, 0u);
        loc_10 = 0u;
L_10113e2e: ;
    COW_AT(10113e2e)
        t3 = rd16(self + 0x232u);
        wr32(sp0 - 0x24u, t3);
        wr32(sp0 - 0x28u, COW_IMG(0x1036c084u));
        wr32(sp0 - 0x2cu, self + 0x238u);
        g->ebx = self + 0x278u;
        g->eax = t3;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x238u, COW_IMG(0x1036c084u), t3, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t5 = g->edx;
        wr32(sp0 - 0x24u, self + 0x238u);
        g->edx = t5;
        t6 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t7 = cow_thiscall(g, COW_IMG(0x101c4c70u), t6, 1, self + 0x238u);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            eax = t7;
            ecx = t8;
            edx = t9;
            goto L_10113ea9;
        }
        eax = t7;
        edx = t9;
    COW_AT(10113e56)
        wr32(sp0 - 0x24u, self + 0x238u);
        g->eax = eax;
        g->edx = edx;
        t10 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t11 = cow_thiscall(g, COW_IMG(0x101c4b40u), t10, 1, self + 0x238u);
        t12 = g->ecx;
        t13 = g->edx;
        if (t11 < 8u)
        {
            eax = t11;
            ecx = t12;
            edx = t13;
            goto L_10113ea9;
        }
        eax = t11;
        edx = t13;
    COW_AT(10113e6d)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 8u);
        wr32(sp0 - 0x2cu, sp0 - 8u);
        wr32(sp0 - 0x30u, self + 0x238u);
        g->eax = eax;
        g->edx = edx;
        t14 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t15 = cow_thiscall(g, COW_IMG(0x101c47b0u), t14, 4, self + 0x238u, sp0 - 8u, 8u, 0u);
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 < 8u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            goto L_10113ea9;
        }
        edx = t17;
    COW_AT(10113e86)
        if (rd32(sp0 - 8u) < rd32(sp0 - 0x10u))
        {
            eax = rd32(sp0 - 8u);
            ecx = rd32(sp0 - 0x10u);
            goto L_10113ea9;
        }
        eax = rd32(sp0 - 8u);
        ecx = rd32(sp0 - 0x10u);
    COW_AT(10113e92)
        wr16(self + 0x232u, (uint16_t)(rd16(self + 0x232u) + 1u));
        wr32(sp0 - 0x10u, eax);
        if (rd16(self + 0x232u) < 8u)
        {
            loc_10 = eax;
            goto L_10113e2e;
        }
    COW_AT(10113ea7)
L_10113eb7: ;
    COW_AT(10113eb7)
        t19 = rd16(self + 0x230u);
        wr16(self + 0x232u, (uint16_t)t19);
        wr32(sp0 - 0x24u, (uint16_t)t19);
        wr32(sp0 - 0x28u, COW_IMG(0x1036c084u));
        wr32(sp0 - 0x2cu, self + 0x238u);
        wr32(self + 0x234u, 0u);
        g->ebx = self + 0x278u;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x238u, COW_IMG(0x1036c084u), (uint16_t)t19, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t20 = g->edx;
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x2cu, self + 0x110u);
        wr32(sp0 - 0x30u, self + 0x238u);
        g->edx = t20;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x101c4900u), rd32(COW_IMG(0x10662dccu)), 4, self + 0x238u, self + 0x110u, 0u, 0u);
        t21 = g->edx;
        wr16(self + 0x448u, 0u);
        wr32(self + 0x278u, 0u);
        wr16(self + 0x27cu, 0u);
        wr16(self + 0x27eu, 0u);
        wr32(sp0 - 0xcu, 0u);
        edi = self + 0x280u;
        eax = 0u;
        ecx = 0x38u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x10u, 0u);
        wr16(self + 0x44au, 0u);
        edx = t21;
        loc_c = 0u;
        loc_10 = 0u;
L_10113f26: ;
    COW_AT(10113f26)
        t22 = rd16(self + 0x44au);
        wr32(sp0 - 0x24u, t22);
        wr32(sp0 - 0x28u, COW_IMG(0x1036c078u));
        wr32(sp0 - 0x2cu, self + 0x450u);
        g->ebx = self + 0x278u;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t23 = cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x450u, COW_IMG(0x1036c078u), t22, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
        t24 = g->edx;
        wr32(sp0 - 0x24u, self + 0x450u);
        g->edx = t24;
        t25 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t26 = cow_thiscall(g, COW_IMG(0x101c4c70u), t25, 1, self + 0x450u);
        t27 = g->ecx;
        t28 = g->edx;
        if ((uint8_t)t26 == 0u)
        {
            eax = t26;
            ecx = t27;
            edx = t28;
            goto L_10114005;
        }
        edx = t28;
    COW_AT(10113f58)
        wr32(sp0 - 0x24u, self + 0x450u);
        g->eax = self + 0x450u;
        g->edx = edx;
        t29 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t30 = cow_thiscall(g, COW_IMG(0x101c4b40u), t29, 1, self + 0x450u);
        t31 = g->ecx;
        t32 = g->edx;
        if (t30 < 0xe8u)
        {
            eax = t30;
            ecx = t31;
            edx = t32;
            goto L_10114005;
        }
        edx = t32;
    COW_AT(10113f75)
        wr32(sp0 - 0x24u, 0u);
        wr32(sp0 - 0x28u, 0xe8u);
        wr32(sp0 - 0x2cu, self + 0x360u);
        wr32(sp0 - 0x30u, self + 0x450u);
        g->eax = self + 0x450u;
        g->edx = edx;
        t33 = rd32(COW_IMG(0x10662dccu));
        g->esp = sp0 - 0x20u;
        t34 = cow_thiscall(g, COW_IMG(0x101c47b0u), t33, 4, self + 0x450u, self + 0x360u, 0xe8u, 0u);
        t35 = g->ecx;
        t36 = g->edx;
        if (t34 < 0xe8u)
        {
            eax = t34;
            ecx = t35;
            edx = t36;
            goto L_10114005;
        }
        eax = t34;
        edx = t36;
    COW_AT(10113f9b)
        wr32(sp0 - 0x24u, 0xe8u);
        wr32(sp0 - 0x28u, self + 0x360u);
        g->ecx = self;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t37 = cow_call_regs(g, COW_IMG(0x10114620u), eax, g->ecx, g->edx, 0, 2, self + 0x360u, 0xe8u);
        t38 = g->ecx;
        t39 = g->edx;
        if ((uint16_t)t37 != 0xffffu)
        {
            eax = t37;
            ecx = t38;
            edx = t39;
            goto L_10114005;
        }
        edx = t39;
    COW_AT(10113fae)
        if (rd32(self + 0x360u) < rd32(self + 0x278u))
        {
            eax = rd32(self + 0x360u);
            ecx = rd32(self + 0x278u);
    COW_AT(10113fdf)
            if (rd32(sp0 - 0xcu) != 0u)
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
    COW_AT(10113fe5)
                if (rd32(sp0 - 0x10u) == 0u)
                {
                    ecx = rd32(sp0 - 0x10u);
                    goto L_10113ff1;
                }
                ecx = rd32(sp0 - 0x10u);
    COW_AT(10113fed)
                if (eax >= ecx)
                {
                    loc_10 = rd32(sp0 - 0x10u);
                    loc_c = rd32(sp0 - 0xcu);
                    goto L_1011401d;
                }
L_10113ff1: ;
    COW_AT(10113ff1)
                wr32(sp0 - 0x10u, eax);
                t41 = rd16(self + 0x44au);
                wr16(self + 0x448u, (uint16_t)t41);
                edx = (edx & 0xffff0000u) | t41;
                loc_10 = eax;
                loc_c = rd32(sp0 - 0xcu);
            }
        }
        else
        {
            eax = rd32(self + 0x360u);
            ecx = rd32(self + 0x278u);
    COW_AT(10113fb6)
            if (self + 0x278u == self + 0x360u)
            {
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
            }
            else
            {
    COW_AT(10113fba)
                wr32(self + 0x278u, eax);
                t40 = rd16(self + 0x364u);
                wr16(self + 0x27cu, (uint16_t)t40);
                wr16(self + 0x27eu, rd16(self + 0x366u));
                esi = self + 0x368u;
                edi = self + 0x280u;
                ecx = 0x38u;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                edx = eax;
                eax = (eax & 0xffff0000u) | t40;
                loc_10 = rd32(sp0 - 0x10u);
                loc_c = rd32(sp0 - 0xcu);
            }
        }
L_1011401d: ;
    COW_AT(1011401d)
        wr16(self + 0x44au, (uint16_t)(rd16(self + 0x44au) + 1u));
        if (rd16(self + 0x44au) < 8u) goto L_10113f26;
    COW_AT(10114032)
        t44 = rd16(self + 0x448u);
        wr32(self + 0x44cu, 0u);
        wr16(self + 0x44au, (uint16_t)t44);
        wr32(sp0 - 0x24u, (uint16_t)t44);
        wr32(sp0 - 0x28u, COW_IMG(0x1036c078u));
        wr32(sp0 - 0x2cu, self + 0x450u);
        g->ebx = self + 0x278u;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, self + 0x450u, COW_IMG(0x1036c078u), (uint16_t)t44, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    }
    COW_AT(10114060)
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->ebp = rd32(sp0 - 0x18u);
    return self;
L_10113ea9: ;
    COW_AT(10113ea9)
    t18 = rd16(self + 0x232u);
    wr16(self + 0x230u, (uint16_t)t18);
    edx = (edx & 0xffff0000u) | t18;
    goto L_10113eb7;
L_10114005: ;
    COW_AT(10114005)
    if (rd32(sp0 - 0xcu) == 0u)
    {
    COW_AT(1011400b)
        t42 = rd16(self + 0x44au);
        wr16(self + 0x448u, (uint16_t)t42);
        eax = (eax & 0xffff0000u) | t42;
    }
    COW_AT(10114019)
    t43 = rd32(sp0 - 0xcu) + 1u;
    wr32(sp0 - 0xcu, t43);
    loc_10 = rd32(sp0 - 0x10u);
    loc_c = t43;
    goto L_1011401d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10113d30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10113d41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    case 0x10113d51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x20u);
        in_esi = rd32(sp0 - 0x1cu);
        in_ebp = rd32(sp0 - 0x18u);
        in_ebx = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x20u;
        g->edx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113e10u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113e2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x238u;
        (void)sp0;
        return 1;
    }
    case 0x10113e56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113e6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x238u;
        (void)sp0;
        return 1;
    }
    case 0x10113e86u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x238u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10113e92u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x238u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10113ea7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10113ea9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113eb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113f26u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113f58u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113f75u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113f9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x10113faeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x10113fb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        g->edi = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x10113fbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->edi = self + 0x360u;
        (void)sp0;
        return 1;
    }
    case 0x10113fdfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113fe5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113fedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10113ff1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114005u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011400bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114019u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1011401du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114032u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        edi = g->edi;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x20u;
        g->ebx = self + 0x278u;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10114060u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x20u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10113d30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10113d30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
