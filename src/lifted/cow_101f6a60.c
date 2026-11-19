/* f_0x101f6a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101f6a60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t3;
    uint32_t t4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f6a78u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f6a78;
    case 0x101f6a83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f6a83;
    case 0x101f6abau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 0xcu); goto E_101f6aba;
    case 0x101f6ae8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6ae8;
    case 0x101f6afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6afb;
    case 0x101f6affu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6aff;
    case 0x101f6b0au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b0a;
    case 0x101f6b11u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b11;
    case 0x101f6b18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b18;
    case 0x101f6b24u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b24;
    case 0x101f6b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b3f;
    case 0x101f6b57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b57;
    case 0x101f6b68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b68;
    case 0x101f6b71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b71;
    case 0x101f6b73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b73;
    case 0x101f6b7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6b7b;
    case 0x101f6ba8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6ba8;
    case 0x101f6bc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_ebp = rd32(sp0 - 0x18u); in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0x18u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6bc6;
    case 0x101f6bc7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0xcu); goto E_101f6bc7;
    case 0x101f6bd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f6bd4;
    case 0x101f6bdeu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f6bde;
    case 0x101f6bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f6bed;
    case 0x101f6c2au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f6c2a;
    case 0x101f6c5cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_edi = g->edi; in_esi = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f6c5c;
    default: break;
    }
#endif

    COW_AT(101f6a60)
    t1 = (self & 0xffffff00u) | rd8(self + 0x46u);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, rd32(rd32(self) + 0x54u), self, 1, t1);
    if (rd16(self + 0x20u) != 0u) goto L_101f6aba;
    COW_AT(101f6a78)
    if (rd32(self + 0x3cu) == 0u) goto L_101f6c5c;
    eax = rd32(self + 0x3cu);
    COW_AT(101f6a83)
    t2 = (uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int8_t)rd8(self + 0x2du) + (uint32_t)(int8_t)rd8(self + 0x45u);
    t3 = (uint32_t)(int16_t)rd16(self + 0x28u) + (uint32_t)(int8_t)rd8(self + 0x2cu) + (uint32_t)(int8_t)rd8(self + 0x44u);
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10129f00u), 5, t3, t2, eax, 0u, 0x80804040u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101f6aba: ;
    COW_AT(101f6aba)
    t4 = (uint32_t)(int16_t)rd16(self + 0x28u) + (uint32_t)(int8_t)rd8(self + 0x2cu);
    t5 = (uint32_t)(int16_t)rd16(self + 0x1au);
    if ((int16_t)rd16(self + 0x1au) >= (int16_t)rd16(self + 0x1cu))
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x2au);
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(self + 0x2au);
        edx = (uint32_t)(int16_t)rd16(self + 0x28u);
        ebx = (uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int8_t)rd8(self + 0x2du);
        edi = t5;
        loc_8 = t4;
        loc_4 = t5;
    COW_AT(101f6ae8)
        ebp = edi * 0x54u;
L_101f6aff: ;
    COW_AT(101f6aff)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t6 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
        t7 = g->ecx;
        t8 = g->edx;
        if (edi != t6)
        {
            ecx = t7;
            edx = t8;
            goto L_101f6b73;
        }
        ecx = t7;
        edx = t8;
    COW_AT(101f6b0a)
        if (rd32(self + 0x34u) != 0u) goto L_101f6b73;
        eax = rd32(self + 0x34u);
    COW_AT(101f6b11)
        if ((int8_t)rd8(self + 0x48u) < 0) goto L_101f6b73;
    COW_AT(101f6b18)
        if ((int16_t)rd16(self + 0x16u) <= 0) goto L_101f6ba8;
        edi = 0u;
L_101f6b24: ;
    COW_AT(101f6b24)
        if ((uint32_t)(int8_t)rd8(self + 0x48u) != edi)
        {
            eax = (rd32(self + 0x30u) & 0xffff0000u) | (uint16_t)(rd16(edi * 2u + rd32(self + 0x30u) + 2u) - rd16(edi * 2u + rd32(self + 0x30u)));
            ecx = (ecx & 0xffff0000u) | rd16(edi * 2u + rd32(self + 0x30u));
            edx = loc_8;
    COW_AT(101f6b57)
            t11 = rd32(self + 0x38u);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x101f4b80u), ebp + t11, 5, self, edi, ecx + edx, ebx, eax);
            t12 = g->ecx;
            ecx = t12;
        }
        else
        {
            eax = (rd32(self + 0x30u) & 0xffff0000u) | (uint16_t)(rd16(edi * 2u + rd32(self + 0x30u) + 2u) - rd16(edi * 2u + rd32(self + 0x30u)));
            ecx = (ecx & 0xffff0000u) | rd16(edi * 2u + rd32(self + 0x30u));
            edx = loc_8;
    COW_AT(101f6b3f)
            t9 = rd32(self + 0x38u);
            g->esp = sp0 - 0x18u;
            cow_thiscall(g, COW_IMG(0x101f4bb0u), ebp + t9, 6, self, edi, ecx + edx, ebx, eax, 0x80803040u);
            t10 = g->ecx;
            ecx = t10;
        }
    COW_AT(101f6b68)
        if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x16u))
        {
            edi = edi + 1u;
            goto L_101f6b24;
        }
    COW_AT(101f6b71)
L_101f6ba8: ;
    COW_AT(101f6ba8)
        if ((int32_t)(loc_4 + 1u) < (int16_t)rd16(self + 0x1cu))
        {
            eax = loc_4 + 1u;
            edx = (uint32_t)(int16_t)rd16(self + 0x26u);
            ebx = ebx + (uint32_t)(int16_t)rd16(self + 0x26u);
            ebp = ebp + 0x54u;
            loc_4 = loc_4 + 1u;
            goto L_101f6afb;
        }
        eax = loc_4 + 1u;
    COW_AT(101f6bc6)
    }
    COW_AT(101f6bc7)
    if (rd32(self + 0x34u) == 0u) goto L_101f6c5c;
    ecx = rd32(self + 0x34u);
    COW_AT(101f6bd4)
    if (rd8(self + 0x49u) == 0u)
    {
        edx = rd32(self + 8u);
        goto L_101f6c2a;
    }
    eax = (eax & 0xffffff00u) | rd8(self + 0x49u);
    edx = rd32(self + 8u);
    COW_AT(101f6bde)
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, edx);
    if ((uint8_t)t16 == 0u) goto L_101f6c5c;
    COW_AT(101f6bed)
    t17 = (uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int8_t)rd8(self + 0x2fu) + ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) - 1u) * (uint32_t)(int16_t)rd16(self + 0x26u);
    t18 = (uint32_t)(int16_t)rd16(self + 0x28u) + (uint32_t)(int8_t)rd8(self + 0x2eu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x34u), 5, t18, t17, 0x80808080u, 0u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
L_101f6afb: ;
    COW_AT(101f6afb)
    edi = loc_4;
    goto L_101f6aff;
L_101f6b73: ;
    COW_AT(101f6b73)
    if ((int16_t)rd16(self + 0x16u) <= 0) goto L_101f6ba8;
    edi = 0u;
L_101f6b7b: ;
    COW_AT(101f6b7b)
    t13 = (edx & 0xffff0000u) | (uint16_t)(rd16(edi * 2u + rd32(self + 0x30u) + 2u) - rd16(edi * 2u + rd32(self + 0x30u)));
    t14 = loc_8 + ((ecx & 0xffff0000u) | rd16(edi * 2u + rd32(self + 0x30u)));
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x101f4b80u), ebp + rd32(self + 0x38u), 5, self, edi, t14, ebx, t13);
    t15 = g->edx;
    if ((int32_t)(edi + 1u) < (int16_t)rd16(self + 0x16u))
    {
        ecx = (uint32_t)(int16_t)rd16(self + 0x16u);
        edx = t15;
        edi = edi + 1u;
        goto L_101f6b7b;
    }
    goto L_101f6ba8;
L_101f6c2a: ;
    COW_AT(101f6c2a)
    t19 = (uint32_t)(int16_t)rd16(self + 0x2au) + (uint32_t)(int8_t)rd8(self + 0x2fu) + ((uint32_t)(int16_t)rd16(edx + 0x4cu) - 1u) * (uint32_t)(int16_t)rd16(self + 0x26u);
    t20 = (uint32_t)(int16_t)rd16(self + 0x28u) + (uint32_t)(int8_t)rd8(self + 0x2eu);
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t20, t19, 0x80808080u, 0u, 0u);
L_101f6c5c: ;
    COW_AT(101f6c5c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f6a60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f6a78u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6a83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6abau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6ae8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f6afbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6affu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b0au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b11u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b24u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b57u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b68u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b71u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6b7bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6ba8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6bc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_ebp = rd32(sp0 - 0x18u);
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x101f6bc7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f6bd4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6bdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6bedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6c2au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101f6c5cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f6a60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101f6a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
