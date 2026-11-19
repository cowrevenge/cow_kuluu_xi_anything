/* f_0x102b6920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102b6920(Guest* g)
{
    double d15;
    double d18;
    double d19;
    double d21;
    double d22;
    double d23;
    double d24;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_64;
    uint32_t loc_84;
    uint32_t loc_88;
    uint32_t loc_8c;
    uint32_t loc_90;
    uint32_t loc_94;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t20;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 212u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102b6935u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6935;
    case 0x102b6939u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6939;
    case 0x102b693cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b693c;
    case 0x102b6957u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6957;
    case 0x102b695bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b695b;
    case 0x102b695eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b695e;
    case 0x102b6972u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6972;
    case 0x102b6976u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6976;
    case 0x102b6979u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6979;
    case 0x102b698cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b698c;
    case 0x102b6990u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6990;
    case 0x102b6993u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b6993;
    case 0x102b699du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b699d;
    case 0x102b69a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69a1;
    case 0x102b69a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69a4;
    case 0x102b69aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69ae;
    case 0x102b69b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69b2;
    case 0x102b69b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69b5;
    case 0x102b69e3u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x9cu); in_esi = rd32(sp0 - 0x98u); in_ebp = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); loc_64 = rd32(sp0 - 0x64u); g->ebp = rd32(sp0 - 0x94u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x9cu); g->esi = rd32(sp0 - 0x98u); goto E_102b69e3;
    case 0x102b69efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); goto E_102b69ef;
    case 0x102b6a0cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_64 = rd32(sp0 - 0x64u); goto E_102b6a0c;
    case 0x102b6a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b6a3c;
    case 0x102b6a40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b6a40;
    case 0x102b6a43u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b6a43;
    case 0x102b6a4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_102b6a4a;
    case 0x102b6a4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b6a4d;
    case 0x102b6a59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); goto E_102b6a59;
    case 0x102b6ae7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8c = rd32(sp0 - 0x8cu); goto E_102b6ae7;
    case 0x102b6b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b6b50;
    case 0x102b6b80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_102b6b80;
    case 0x102b6ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); loc_94 = rd32(sp0 - 0x94u); loc_90 = rd32(sp0 - 0x90u); loc_88 = rd32(sp0 - 0x88u); loc_84 = rd32(sp0 - 0x84u); loc_64 = rd32(sp0 - 0x64u); goto E_102b6ba2;
    default: break;
    }
#endif

    COW_AT(102b6920)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_ebp);
    wr32(sp0 - 0x98u, in_esi);
    wr32(sp0 - 0x9cu, in_edi);
    if (arg3 != 0u)
    {
    COW_AT(102b6939)
        ecx = rd32(arg3 + 0x54u);
    }
    else
    {
    COW_AT(102b6935)
        ecx = 0u;
    }
    COW_AT(102b693c)
    t1 = ecx + rd32(arg4) * 0xcu;
    wr32(sp0 - 0x54u, t1);
    if (arg3 != 0u)
    {
        edx = rd32(arg4) * 0xcu;
    COW_AT(102b695b)
        esi = rd32(arg3 + 0x54u);
    }
    else
    {
        edx = rd32(arg4) * 0xcu;
    COW_AT(102b6957)
        esi = 0u;
    }
    COW_AT(102b695e)
    t2 = esi + rd32(arg4 + 4u) * 0xcu;
    wr32(sp0 - 0x50u, t2);
    if (arg3 != 0u)
    {
        ecx = rd32(arg4 + 4u) * 0xcu;
    COW_AT(102b6976)
        esi = rd32(arg3 + 0x54u);
    }
    else
    {
        ecx = rd32(arg4 + 4u) * 0xcu;
    COW_AT(102b6972)
        esi = 0u;
    }
    COW_AT(102b6979)
    t3 = esi + rd32(arg4 + 8u) * 0xcu;
    wr32(sp0 - 0x4cu, t3);
    if (arg3 != 0u)
    {
        eax = rd32(arg4 + 8u) * 0xcu;
    COW_AT(102b6990)
        esi = rd32(arg3 + 0x58u);
    }
    else
    {
        eax = rd32(arg4 + 8u) * 0xcu;
    COW_AT(102b698c)
        esi = 0u;
    }
    COW_AT(102b6993)
    wr32(sp0 - 0x60u, edx + esi);
    if (arg3 != 0u)
    {
    COW_AT(102b69a1)
        edx = rd32(arg3 + 0x58u);
    }
    else
    {
    COW_AT(102b699d)
        edx = 0u;
    }
    COW_AT(102b69a4)
    wr32(sp0 - 0x5cu, ecx + edx);
    if (arg3 != 0u)
    {
    COW_AT(102b69b2)
        ecx = rd32(arg3 + 0x58u);
    }
    else
    {
    COW_AT(102b69ae)
        ecx = 0u;
    }
    COW_AT(102b69b5)
    wr32(sp0 - 0x58u, eax + ecx);
    wr32(sp0 - 0x88u, arg1);
    t4 = arg5 * 2u - arg1 + 1u;
    wr32(sp0 - 0x64u, t4);
    if ((int32_t)arg1 >= (int32_t)(arg5 * 2u - arg1 + 1u))
    {
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
    }
    else
    {
        loc_64 = t4;
    COW_AT(102b69e3)
        wr32(sp0 - 0x84u, arg1 * 0xcu);
        ebx = arg1;
        esi = arg1 * 0xcu;
        loc_90 = in_ebx;
        loc_94 = in_ebp;
        loc_98 = in_esi;
        loc_9c = in_edi;
        loc_88 = arg1;
        loc_84 = arg1 * 0xcu;
L_102b6a0c: ;
    COW_AT(102b6a0c)
        wr32(sp0 - 0xa0u, arg5);
        wr32(sp0 - 0xa4u, ebx);
        wr32(sp0 - 0xa8u, arg1);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        g->ecx = arg5;
        g->edx = sp0 - 0x80u;
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x102b6bb0u), 4, sp0 - 0x80u, arg1, ebx, arg5);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0xb0u, arg4);
        wr32(sp0 - 0xb4u, arg3);
        wr32(sp0 - 0xb8u, arg2);
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xc0u, ebx);
        g->esp = sp0 - 0x74u;
        cow_bridge_indirect(g, COW_IMG(0x102b6c00u), 0u, 19u, (const uint32_t[]){ebx, sp0 - 0x80u, arg2, arg3, arg4, sp0 - 0x80u, arg1, rd32(sp0 - 0xa4u), arg5, rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u)}, g->ecx, g->edx, g->eax, 76u);
        if (arg2 != 0u)
        {
    COW_AT(102b6a40)
            eax = rd32(arg2 + 0x54u);
        }
        else
        {
    COW_AT(102b6a3c)
            eax = 0u;
        }
    COW_AT(102b6a43)
        if (arg2 == 0u)
        {
            ebx = eax + esi;
            edi = arg2;
        }
        else
        {
            ebx = eax + esi;
    COW_AT(102b6a4a)
            edi = rd32(arg2 + 0x58u);
        }
    COW_AT(102b6a4d)
        wr32(sp0 - 0x8cu, sp0 - 0x24u);
        ecx = sp0 - 0x24u;
        esi = edi + esi;
        edi = 0u;
        loc_8c = sp0 - 0x24u;
L_102b6a59: ;
    COW_AT(102b6a59)
        wr32(sp0 - 0xa0u, ebx);
        t7 = rd32(edi + sp0 - 0x54u);
        wr32(sp0 - 0xa4u, t7);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = t7;
        g->esp = sp0 - 0x9cu;
        t8 = cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x30u, t7, ebx);
        t9 = g->edx;
        wr32(sp0 - 0xacu, esi);
        t10 = rd32(edi + sp0 - 0x60u);
        wr32(sp0 - 0xb0u, t10);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        g->ecx = sp0 - 0x3cu;
        g->esp = sp0 - 0xa8u;
        cow_cdecl(g, COW_IMG(0x10274980u), 3, sp0 - 0x3cu, t10, esi);
        t11 = g->ecx;
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->ecx = t11;
        g->edx = sp0 - 0x3cu;
        g->esp = sp0 - 0xb4u;
        t12 = cow_cdecl(g, COW_IMG(0x10274890u), 2, sp0 - 0x30u, sp0 - 0x3cu);
        t13 = g->ecx;
        t14 = g->edx;
        d15 = cow_take_float(g);
        wrf32(sp0 - 0x68u, (float)(double)(float)d15);
        wr32(sp0 - 0xc0u, esi);
        wr32(sp0 - 0xc4u, t10);
        g->edx = t14;
        g->esp = sp0 - 0xbcu;
        t16 = cow_cdecl(g, COW_IMG(0x10274890u), 2, t10, esi);
        t17 = g->edx;
        d18 = cow_take_float(g);
        d19 = fr(g, d18 + (double)rdf32(COW_IMG(0x1032961cu)));
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xccu, ebx);
        t20 = rd32(sp0 - 0x8cu);
        d21 = fr(g, (double)rdf32(sp0 - 0x68u) / d19);
        wr32(sp0 - 0xd0u, t20);
        d22 = fr(g, d21 * (double)rdf32(esi));
        wrf32(sp0 - 0x48u, (float)(double)(float)d22);
        d23 = fr(g, d21 * (double)rdf32(esi + 4u));
        wrf32(sp0 - 0x44u, (float)(double)(float)d23);
        d24 = fr(g, d21 * (double)rdf32(esi + 8u));
        wrf32(sp0 - 0x40u, (float)(double)(float)d24);
        g->ecx = sp0 - 0x48u;
        g->edx = t17;
        g->esp = sp0 - 0xc4u;
        t25 = cow_cdecl(g, COW_IMG(0x10274980u), 3, t20, ebx, sp0 - 0x48u);
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x8cu, t20 + 0xcu);
        if ((int32_t)(edi + 4u) < 12)
        {
            ecx = t26;
            edi = edi + 4u;
            loc_8c = t20 + 0xcu;
            goto L_102b6a59;
        }
        eax = t25;
        ecx = t26;
        edx = t27;
    COW_AT(102b6ae7)
        d28 = (double)rdf32(sp0 - 0x78u);
        d29 = (double)rdf32(sp0 - 0x7cu);
        d30 = (double)rdf32(sp0 - 0x80u);
        wr32(sp0 - 0xa0u, ebx);
        d31 = fr(g, d30 * d30);
        d32 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / fr(g, fr(g, d31 + fr(g, d29 * d29)) + fr(g, d28 * d28)));
        wrf32(sp0 - 0x8cu, (float)(double)(float)d32);
        d33 = (double)(float)fr(g, (double)(float)d32 * d31);
        wrf32(sp0 - 0x74u, (float)d33);
        d34 = (double)(float)fr(g, (double)(float)d32 * fr(g, d29 * d29));
        wrf32(sp0 - 0x70u, (float)d34);
        d35 = (double)(float)fr(g, (double)(float)d32 * fr(g, d28 * d28));
        wrf32(sp0 - 0x6cu, (float)d35);
        g->esp = sp0 - 0x9cu;
        cow_cdecl(g, COW_IMG(0x10274660u), 1, ebx);
        eax = ebx;
        ecx = sp0 - 0xcu - ebx;
        edx = 3u;
L_102b6b50: ;
    COW_AT(102b6b50)
        d36 = fr(g, fr(g, (double)rdf32(sp0 - 0x74u) * (double)rdf32(eax + ecx - 0x18u)) + (double)rdf32(eax));
        wrf32(eax, (float)d36);
        d37 = fr(g, d36 + fr(g, (double)rdf32(sp0 - 0x70u) * (double)rdf32(eax + ecx - 0xcu)));
        wrf32(eax, (float)d37);
        d38 = fr(g, fr(g, (double)rdf32(sp0 - 0x6cu) * (double)rdf32(eax + ecx)) + d37);
        wrf32(eax, (float)d38);
        if (edx != 1u)
        {
            eax = eax + 4u;
            edx = edx - 1u;
            goto L_102b6b50;
        }
    COW_AT(102b6b80)
        t39 = rd32(sp0 - 0x88u) + 2u;
        t40 = rd32(sp0 - 0x88u);
        wr32(sp0 - 0x88u, t39);
        t41 = rd32(sp0 - 0x84u) + 0x18u;
        wr32(sp0 - 0x84u, t41);
        if ((int32_t)(t40 + 2u) < (int32_t)rd32(sp0 - 0x64u))
        {
            loc_88 = t39;
            loc_84 = t41;
            goto L_102b69ef;
        }
        loc_90 = rd32(sp0 - 0x90u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_98 = rd32(sp0 - 0x98u);
        loc_9c = rd32(sp0 - 0x9cu);
    }
    COW_AT(102b6ba2)
    g->ebx = loc_90;
    g->esi = loc_98;
    g->edi = loc_9c;
    g->ebp = loc_94;
    return;
L_102b69ef: ;
    COW_AT(102b69ef)
    ebx = loc_88;
    esi = loc_84;
    loc_90 = rd32(sp0 - 0x90u);
    loc_94 = rd32(sp0 - 0x94u);
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_64 = rd32(sp0 - 0x64u);
    goto L_102b6a0c;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102b6920(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102b6935u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6939u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b693cu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6957u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b695bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b695eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6972u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6976u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6979u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b698cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6990u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6993u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b699du:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69a1u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69a4u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69aeu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69b2u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69b5u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x9cu;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b69e3u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_64;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x9cu);
        in_esi = rd32(sp0 - 0x98u);
        in_ebp = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x9cu;
        g->eax = arg1;
        g->ebx = arg1;
        g->ebp = arg4;
        g->edi = arg3;
        wr32(sp0 - 0x88u, arg1);
        (void)sp0;
        return 1;
    }
    case 0x102b69efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_84;
        uint32_t loc_88;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a0cu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x9cu;
        g->eax = arg1;
        g->ebp = arg4;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102b6a3cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a40u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a43u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x9cu;
        g->edi = arg2;
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a4du:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xbcu, sp0 - 0x80u);
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x102b6a59u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    case 0x102b6ae7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8c = rd32(sp0 - 0x8cu);
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102b6b50u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102b6b80u:
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
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0xc8u, sp0 - 0x48u);
        wr32(sp0 - 0xbcu, sp0 - 0x30u);
        wr32(sp0 - 0xb8u, sp0 - 0x3cu);
        wr32(sp0 - 0xb4u, sp0 - 0x3cu);
        wr32(sp0 - 0xa8u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x102b6ba2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_64;
        uint32_t loc_84;
        uint32_t loc_88;
        uint32_t loc_90;
        uint32_t loc_94;
        uint32_t loc_98;
        uint32_t loc_9c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        loc_94 = rd32(sp0 - 0x94u);
        loc_90 = rd32(sp0 - 0x90u);
        loc_88 = rd32(sp0 - 0x88u);
        loc_84 = rd32(sp0 - 0x84u);
        loc_64 = rd32(sp0 - 0x64u);
        g->esp = sp0 - 0x9cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102b6920(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102b6920(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
